
```bash
# build tensorflow_model_server
~ /opt/bazel-prefix/0.21.0/bin/bazel build --action_env TF_REVISION="984270cb62fbac12b6e4328e4c23346744ba9c20" -c dbg --strip=never --cxxopt=-D_GLIBCXX_USE_CXX11_ABI=0 //tensorflow_serving/model_servers:tensorflow_model_server --workspace_status_command=tools/gen_status_stamp.sh
~
~ # startup server
~ bazel-bin/tensorflow_serving/model_servers/tensorflow_model_server --port=8500 --model_name="start_tf_demo" --model_base_path=/Users/taozj/Dropbox/repos/machine_learning/TENSORFLOW/tensorflow-branch-v1.13.z/tensorflow_v1.13.z/study/python-scripts/saved_simple_add

```
