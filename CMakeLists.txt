cmake_minimum_required(VERSION 3.15)
project(openmp)

set(CMAKE_CXX_STANDARD 14)

add_executable(openmp main.cpp pi.cpp pi.h car.cpp car.h critical.cpp critical.h)

find_package(OPENMP)
target_link_libraries(openmp PRIVATE OpenMP::OpenMP_CXX)
