cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled HelloWorld.cpp)
add_executable("C/Hello.c"
        "C++/C++ Structure/Basic_Structure.cpp"
        "C++/C++ Structure/Structure.cpp"
)