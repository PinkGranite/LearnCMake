cmake_minimum_required(VERSION 3.19)

project(LearnCMake VERSION 1.0)

configure_file(LearnCMakeConf.h.in LearnCMakeConf.h)

set(CMAKE_CXX_STANDARD 11)

add_executable(LearnCMake main.cpp)

# 确定是否使用MyMathLib
option(USE_MYMATHLIB "a simple lib for add two integers" ON)

if(USE_MYMATHLIB)
    add_subdirectory(MyMathLib)

    list(APPEND EXTRA_INCLUDE_DIRS "MyMathLib")
    list(APPEND EXTRA_LINK_DIRS "MyMathLib")
    list(APPEND EXTRA_LINKS "MyMathLib")

endif()

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_BINARY_DIR}
    PUBLIC ${EXTRA_INCLUDE_DIRS}
)

target_link_directories(${PROJECT_NAME}
    PUBLIC ${EXTRA_LINK_DIRS}
)

target_link_libraries(${PROJECT_NAME} 
    PUBLIC ${EXTRA_LINKS}
)