cmake_minimum_required(VERSION 3.10.2)

project("opencl")
# 设置库的输出路径
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/src/main/jniLibs/${ANDROID_ABI})

#添加子目录，将自动找到子目录中的CMakeLists.txt
add_subdirectory(${CMAKE_SOURCE_DIR}/src/main/cpp/openclstatic)
add_subdirectory(${CMAKE_SOURCE_DIR}/src/main/cpp/main)