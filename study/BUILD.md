
bazel build -c dbg --strip=never --cxxopt=-D_GLIBCXX_USE_CXX11_ABI=0 //tensorflow_serving/model_servers:tensorflow_model_server


bazel-bin/tensorflow_serving/model_servers/tensorflow_model_server --port=8500 --model_name="start_tf_demo" --model_base_path=/home/user/repos/machine_learning/tensorflow_serving_v1.13.z/tensorflow_serving/servables/tensorflow/testdata/saved_model_half_plus_two_cpu

