cmake_minimum_required(VERSION 3.1)

project(testsCPP)

find_package(GTest REQUIRED)
find_package(Threads REQUIRED)
include_directories(../app/include)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED on)

include_directories(
    ../app/src
    ${GTEST_INCLUDE_DIRS}
)

add_executable(
  googleTests
  test.cpp)

target_link_libraries(
  googleTests ${GTEST_LIBRARIES} Threads::Threads)

enable_testing()
add_test(googleTests "./googleTests")
set_target_properties(googleTests PROPERTIES RUNTIME_OUTPUT_DIRECTORY "../")