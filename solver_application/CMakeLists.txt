# Если версия будет меньше 3.4, вылетет фатальная ошибка
cmake_minimum_required(VERSION 3.8)

project(hello)

# Стандарты компилятора
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(equation equation.cpp)

# Ужасно не удобно что хедеры не в одной дириктории((
include_directories(
	${CMAKE_SOURCE_DIR}/../formatter_ex_lib
	${CMAKE_SOURCE_DIR}/../solver_lib
	)

# Тут мне стало грустно(
# По идее я прилинковал formatter к formatter_ex,
# Я был убеждён, что мне не потребуется пробрасывать formater дальше
# Но почему то без этого не компилируется((((
# Искал как сделать адыкватно пол дня, нашёл 
# https://www.linux.org.ru/forum/development/13254441
# И тут мне стало грустно(
# Оставлю так, если кто-то знает как сделать лучше,
# Пишите - nevstruev.dmitriy@mail.ru - будет большое спасибо)
target_link_libraries(equation 
	${CMAKE_SOURCE_DIR}/../formatter_ex_lib/libformatter_ex.a
	${CMAKE_SOURCE_DIR}/../formatter_lib/libformatter.a
	${CMAKE_SOURCE_DIR}/../solver_lib/libsolver.a
	)

