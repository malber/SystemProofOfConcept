cmake_minimum_required(VERSION 2.8.9)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)

project(SystemProofOfConcept)

set (PROJECT_SRC src/)
add_executable(run_me ${PROJECT_SRC}/main.cpp)
