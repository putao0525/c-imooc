cmake_minimum_required(VERSION 3.21)
project(c_imooc C)

set(CMAKE_C_STANDARD 23)
include_directories(include) # 这个是用来配置工程的头文件搜索 ，include <> 和 ""

file(GLOB files ${PROJECT_SOURCE_DIR}/*.c)
foreach (file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file})
endforeach ()

