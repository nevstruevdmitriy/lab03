# Вресия cmake должна быть не ниже 3.4
cmake_minimum_required(VERSION 3.4)

project(formatter_ex)

# Cтандарты компилятора
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Нужна статическая библиотека
add_library(formatter_ex STATIC formatter_ex.cpp)

# Расшариваю дирикторию, где лежит библиотека
include_directories(../formatter_lib)

# Подключаю старую библиотеку. Честно долго пытался найти,
# подключить по нормальному - не нашёл( (без страшного названия libformatter.a)
# target_link_libraries(formatter_ex formatter) - ищет в /usr/bin - неприятно
# link_dirictiryes - не помогает
# find_packages - не помогает
target_link_libraries(formatter_ex ${CMAKE_SOURCE_DIR}/../formater_lib/libformatter.a)
