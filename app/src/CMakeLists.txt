cmake_minimum_required(VERSION 3.1)

project(src LANGUAGES CXX)
add_library(src ArrayTransformer.h
                ArrayTransformer.cpp
                PrintArray.h
                PrintArray.cpp
                SortArray.h
                SortArray.cpp
                IntersectArray.h
                IntersectArray.cpp
                UniqueReversedArray.h
                UniqueReversedArray.cpp)