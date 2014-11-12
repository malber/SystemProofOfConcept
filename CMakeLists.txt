set(CMAKE_COMPILER_IS_GNUCC TRUE)


cmake_minimum_required(VERSION 2.8.7)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
project(SystemProofOfConcept)



add_subdirectory (googletest)
include_directories(googletest/include/)

FIND_LIBRARY(GTEST_LIBRARY gtest googletest/)

set (PROJECT_SRC src/)
add_executable(run_me ${PROJECT_SRC}/main.cpp)
TARGET_LINK_LIBRARIES(run_me ${GTEST_LIBRARY})
