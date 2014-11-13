set(CMAKE_COMPILER_IS_GNUCC TRUE)
cmake_minimum_required(VERSION 2.8.11)


# This is the name of the project
project(SystemProofOfConcept)

# A couple of useful variables
set(EXECUTABLE_NAME main)
set(TEST_EXECUTABLE_NAME runTests)


# This sets the folder for our executables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY  ${CMAKE_BINARY_DIR}/lib )

set (PROJECT_SRC src/)

include_directories(includes/)


# Beginning of test with cmake
add_library(polygon STATIC ${PROJECT_SRC}/polygon.cpp)


add_executable(${TEST_EXECUTABLE_NAME} ${PROJECT_SRC}/mainTests.cpp)
target_link_libraries(${TEST_EXECUTABLE_NAME} polygon)

# Main exec compilation
add_executable(${EXECUTABLE_NAME} ${PROJECT_SRC}/main.cpp)
target_link_libraries(${EXECUTABLE_NAME} polygon)

