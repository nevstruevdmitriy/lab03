# Требую версию >= cmake3.4
cmake_minimum_required(VERSION 3.4)

# Приятно задаю все нужные флаги компилятора))
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --std=c++11")

# Компилирую статическую библиотеку, название в соотвествии с заданием
add_library(solver STATIC solver.cpp)

