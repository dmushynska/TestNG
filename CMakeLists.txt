cmake_minimum_required(VERSION 3.1)
project(test)
set(CMAKE_CXX_STANDARD 11)
include_directories(${CMAKE_SOURCE_DIR}/app/src)
add_subdirectory(app)
set_target_properties(ArrayTransformer PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../../")