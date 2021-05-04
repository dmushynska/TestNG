cmake_minimum_required(VERSION 3.1)
include_directories(../include)
project(src LANGUAGES CXX)
add_library(src
                ArrayTransformer.cpp
                PrintArray.cpp
                SortArray.cpp
                IntersectArray.cpp
                UniqueReversedArray.cpp)
