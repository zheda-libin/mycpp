cmake_minimum_required(VERSION 3.0.0)
project(mycpp)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_CXX_STANDARD 14)

file(GLOB SRCS ${PROJECT_SOURCE_DIR}/*.cpp)
foreach(SRC IN LISTS SRCS)
    get_filename_component(TGT ${SRC} NAME_WE)
    message("${TGT}")
    add_executable(${TGT} ${SRC})
endforeach()
