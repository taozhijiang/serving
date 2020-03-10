cmake_minimum_required (VERSION 2.8.12)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g -Wno-shadow -Wno-sign-compare")
set(CMAKE_CXX_STANDARD 11)

project(start_tf_serving)

# 编译结果中的库和可执行文件的路径
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib)

set(DEPENDENCY_PREFIX "../../../../opensource/")
set(INCLUDE_DIRS
    ${DEPENDENCY_PREFIX}/tensorflow_and_paddle/tensorflow_install_v1.13.1/include
    ${DEPENDENCY_PREFIX}/tensorflow_and_paddle/tensorflow_install_v1.13.1/include/abseil-cpp
    ${DEPENDENCY_PREFIX}/tensorflow_and_paddle/tensorflow_install_v1.13.1/include/eigen_archive
    /home/user/repos/machine_learning/tensorflow_serving_v1.13.z/bazel-genfiles/
    /home/user/prefix/include/
    ${PROJECT_SOURCE_DIR}/
)
include_directories( ${INCLUDE_DIRS} )

add_subdirectory( apis/ )

link_directories(
    ${DEPENDENCY_PREFIX}/tensorflow_and_paddle/tensorflow_install_v1.13.1/lib_monolithic/
    /home/user/repos/machine_learning/tensorflow_v1.13.z/bazel-bin/tensorflow
    /home/user/prefix/lib/
)

set (EXTRA_LIBS ${EXTRA_LIBS} apis)

set (EXTRA_LIBS ${EXTRA_LIBS} protoc protobuf)
set (EXTRA_LIBS ${EXTRA_LIBS} grpc++ grpc gpr)
set (EXTRA_LIBS ${EXTRA_LIBS} pthread z)
set (EXTRA_LIBS ${EXTRA_LIBS} pthread tensorflow_cc)

add_executable(start_tf_client client.cc)
target_link_libraries(
    start_tf_client
    ${EXTRA_LIBS}
)
