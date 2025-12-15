cmake_minimum_required(VERSION 3.10)
project(cinema_system)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Включаем автоматическую обработку MOC для Qt
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

# Указываем путь к заголовочным файлам
include_directories(../headers)

# Перечисляем ВСЕ исходные файлы с правильными путями
add_executable(cinema_system
    ../sources/main.cpp
    ../sources/MainWindow.cpp
    ../sources/CinemaSystem.cpp
    ../sources/Movie.cpp
    ../sources/CinemaHall.cpp
    ../sources/Session.cpp
    ../sources/Customer.cpp
    ../sources/Person.cpp
    ../sources/Ticket.cpp
    ../sources/Booking.cpp
    ../sources/BookingDialog.cpp
    ../sources/SessionDialog.cpp
    ../sources/HallDialog.cpp
    ../sources/MovieDialog.cpp
    ../sources/HallMapDialog.cpp
    ../sources/MovieService.cpp
    ../sources/SessionService.cpp
    ../sources/BookingService.cpp
    ../sources/CustomerService.cpp
)

# Связываем с Qt5
target_link_libraries(cinema_system Qt5::Widgets)
