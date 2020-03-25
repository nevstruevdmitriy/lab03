# Требую версию >= cmake3.4
cmake_minimum_required(VERSION 3.4)

# Задаю стандарты компилятора
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Компилирую статическую библиотеку, название в соотвествии с заданием
add_library(formatter STATIC formatter.cpp)

