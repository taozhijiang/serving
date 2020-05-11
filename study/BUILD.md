64bit Mac OS X 10.14.6 18G4032
bazel v3.0.0
https://github.com/taozhijing/serving


⇒  bazel build --action_env TF_REVISION="2a5381fd5519101641ac2a6f9f54f94ffc74419a" -c dbg --strip=never  --cxxopt=-D_GLIBCXX_USE_CXX11_ABI=0 //tensorflow_serving/model_servers:tensorflow_model_server --workspace_status_command=tools/gen_status_stamp.sh

