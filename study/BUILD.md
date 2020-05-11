
# check the latest with github.com/taozhijiang/serving, branch r1.13.z-optimize-for-serving
bazel build --action_env TF_REVISION="716bd51f1042bb751fd6f8088517752d310641e2" -c dbg --strip=never --cxxopt=-D_GLIBCXX_USE_CXX11_ABI=0 //tensorflow_serving/model_servers:tensorflow_model_server


bazel-bin/tensorflow_serving/model_servers/tensorflow_model_server --port=8500 --model_name="start_tf_demo" --model_base_path=/home/user/repos/machine_learning/tensorflow_serving_v1.13.z/tensorflow_serving/servables/tensorflow/testdata/saved_model_half_plus_two_cpu

