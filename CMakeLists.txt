cmake_minimum_required(VERSION 3.24)
project(Animals)

set(CMAKE_CXX_STANDARD 17)

add_executable(Animals main.cpp animal.cpp animal.h animal1.cpp animal1.h SeaOtter.cpp SeaOtter.h Sloth.cpp Sloth.h Monkey.cpp Monkey.h zoo.cpp zoo.h)
