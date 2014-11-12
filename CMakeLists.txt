set(CMAKE_COMPILER_IS_GNUCC TRUE)
cmake_minimum_required(VERSION 2.8.11)

# This is the name of the project
project(SystemProofOfConcept)

# This sets the folder for our executables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)


set(EXECUTABLE_NAME run_me)



include_directories(includes/)


set (PROJECT_SRC src/)

add_executable(${EXECUTABLE_NAME} ${PROJECT_SRC}/main.cpp)
