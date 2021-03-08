cmake_minimum_required(VERSION 3.2)

project(L03_data_structures)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# add executables
add_executable(main main.cpp)
add_executable(arrays src/arrays_list.cpp include/array_list.hpp)