cmake_minimum_required(VERSION 3.21)
project(c_test02 C)

set(CMAKE_C_STANDARD 23)
include_directories(include)

file(GLOB files ${PROJECT_SOURCE_DIR}/*.c)
foreach (file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file})
endforeach ()

