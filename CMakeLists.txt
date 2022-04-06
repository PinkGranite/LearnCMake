cmake_minimum_required(VERSION 3.19)

project(LearnCMake VERSION 1.0)

configure_file(LearnCMakeConf.h.in LearnCMakeConf.h)

set(CMAKE_CXX_STANDARD 11)

add_executable(LearnCMake main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

add_subdirectory(MyMathLib)

target_include_directories(${PROJECT_NAME} PUBLIC MyMathLib)

target_link_directories(${PROJECT_NAME} PUBLIC MyMathLib)

target_link_libraries(${PROJECT_NAME} MyMathLib)