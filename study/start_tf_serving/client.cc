#include <iostream>

#include "tensorflow/cc/saved_model/loader.h"
#include "tensorflow/core/framework/graph.pb.h"
#include "tensorflow/core/protobuf/meta_graph.pb.h"
#include  "tensorflow/cc/saved_model/tag_constants.h"

#include "grpcpp/create_channel.h"
#include "grpcpp/security/credentials.h"
#include "google/protobuf/map.h"

#include "tensorflow/core/framework/tensor.h"
#include "tensorflow/core/platform/types.h"
#include "tensorflow/core/util/command_line_flags.h"
#include "apis/prediction_service.grpc.pb.h"

using grpc::Channel;
using grpc::ClientContext;
using grpc::Status;

using tensorflow::serving::PredictRequest;
using tensorflow::serving::PredictResponse;
using tensorflow::serving::PredictionService;

// server startup by:
// ./tensorflow_model_server --port=8500 --model_name="start_tf_demo" --model_base_path=/path/to...
// bin/start_tf_client /path/to...

const std::string input_node = "x";
const std::string output_node = "y";

typedef google::protobuf::Map<tensorflow::string, tensorflow::TensorProto> OutMap;

class ServingClient {
public:
    ServingClient(std::shared_ptr<Channel> channel)
        : stub_(PredictionService::NewStub(channel)) { }

    bool callPredict(const tensorflow::string& model_name,
                     const tensorflow::string& model_signature_name) {

        PredictRequest predictRequest;
        PredictResponse response;
        ClientContext context;

        predictRequest.mutable_model_spec()->set_name(model_name);
        predictRequest.mutable_model_spec()->set_signature_name(
            model_signature_name);

        google::protobuf::Map<tensorflow::string, tensorflow::TensorProto>& inputs =
            *predictRequest.mutable_inputs();
        // 实例的请求数据
        tensorflow::TensorProto proto;
        proto.mutable_tensor_shape()->add_dim()->set_size(3);
        proto.set_dtype(tensorflow::DataType::DT_FLOAT);
        for (size_t i = 0; i < 3; ++i) {
            proto.add_float_val(static_cast<float>(i));
        }
        inputs[input_node] = proto;

        Status status = stub_->Predict(&context, predictRequest, &response);

        if (status.ok()) {

            //std::cout << "outputs size is " << response.outputs_size() << std::endl;
            google::protobuf::Map<tensorflow::string, tensorflow::TensorProto>& map_outputs = *response.mutable_outputs();

            for (auto iter = map_outputs.begin(); iter != map_outputs.end(); ++iter) {
                tensorflow::TensorProto& result_tensor_proto = iter->second;
                tensorflow::Tensor tensor;
                bool converted = tensor.FromProto(result_tensor_proto);
                if (converted) {
                    std::cout << "the result tensor is:" << tensor.DebugString() << std::endl;
                } else {
                    std::cout << "the result tensor convert failed." << std::endl;
                }
            }
            return  true;
        }


        std::cout << "gRPC call return code: " << status.error_code() << ": " << status.error_message() << std::endl;
        return false;
    }

private:
    std::unique_ptr<PredictionService::Stub> stub_;
};

static void usage() {
    std::cout << "bin/start_tf_client [model_dir]" << std::endl;
    std::cout << "provide model_dir for more info." << std::endl;
}

int main(int argc, char* argv[]) {

    std::string model_dir;
    if (argc >= 2)
        model_dir = argv[1];

    if (!model_dir.empty()) {

        tensorflow::SavedModelBundle bundle;
        tensorflow::SessionOptions session_options;
        tensorflow::RunOptions run_options;

        auto status = tensorflow::LoadSavedModel(session_options, run_options, model_dir,
        { tensorflow::kSavedModelTagServe }, &bundle);
        if (!status.ok()) {
            std::cout << "call LoadSavedModle failed at: " << model_dir << std::endl;
            std::cout << status.error_message() << std::endl;
            return EXIT_FAILURE;
        }

        const auto signature_def_map = bundle.meta_graph_def.signature_def();
        const auto signature_def = signature_def_map.at("serving_default");

        auto inputs = signature_def.inputs();
        for (auto iter = inputs.begin(); iter != inputs.end(); ++iter) {
            std::cout << "inputs: " << iter->first << std::endl;
        }

        auto outputs = signature_def.outputs();
        for (auto iter = outputs.begin(); iter != outputs.end(); ++iter) {
            std::cout << "outputs: " << iter->first << std::endl;
        }

        // TODO
        // bundle session inference

    }

    // gRPC
    tensorflow::string server_port = "localhost:8500";
    tensorflow::string model_name = "start_tf_demo";
    tensorflow::string model_signature_name = "serving_default";

    ServingClient guide(grpc::CreateChannel(server_port, grpc::InsecureChannelCredentials()));
    std::cout << guide.callPredict(model_name, model_signature_name)
        << std::endl;

    return 0;
}
