cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

project(linear_data_structures)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

# add executables
add_executable(array_list src/arrays_list.cpp include/array_list.hpp)
add_executable(linked_list src/linked_list.cpp include/linked_list.hpp)
add_executable(main main.cpp)
