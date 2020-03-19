cmake_minimum_required(VERSION 3.10)
project(
    ASample, 
    VERSION 0.0.1 
    DESCRIPTION "Sample Linux VSCode/CMake Project"
    LANGUAGES CXX
    )

set(PROJECT_DIR ${CMAKE_CURRENT_SOURCE_DIR})

message("Project_Name: ${PROJECT_NAME}")
message("Project_Dir: ${PROJECT_DIR}")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

# define the app target
set(SOURCE 
    src/MultiplyTest.cpp 
    src/MultiplyClass.cpp 
    src/MultiplyClass.hpp
    src/AddClass.cpp 
    src/AddClass.hpp    
    )
add_executable(SampleApp ${SOURCE})

include(CTest)
enable_testing()

# add the tests
add_subdirectory(tests)
