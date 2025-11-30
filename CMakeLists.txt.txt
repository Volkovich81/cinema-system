cmake_minimum_required(VERSION 3.16)
project(CinemaSystem VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Для SonarQube
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets Test)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Основное приложение
add_subdirectory(src)

# Тесты
enable_testing()
add_subdirectory(test)
add_subdirectory(ui_test)