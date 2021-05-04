cmake_minimum_required(VERSION 3.1)

project(app_project LANGUAGES CXX)
set(SOURCE_EXE main.cpp)
add_subdirectory(src)
include_directories(include)
add_compile_options(
        -std=c++11
        -Werror
        -Wall
        -Wextra
        -Wpedantic
)

add_executable(ArrayTransformer ${SOURCE_EXE})
target_link_libraries(ArrayTransformer src)
