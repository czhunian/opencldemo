cmake_minimum_required(VERSION 3.10.2)

project("openclstatic")
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)

# 设置库输出地址

add_library(
        openclstatic
        STATIC
        libopencl.cpp)

#添加工程所依赖的库
# 第一参数表示库名字，第二参数表示查找的库，第三参数表示查找目录
find_library(
        log-lib
        log )

target_link_libraries(openclstatic ${log-lib})