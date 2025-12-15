cmake_minimum_required(VERSION 3.10)
project(KursachNew)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

# Заголовки прямо здесь
include_directories(headers)

# Все файлы здесь же
add_executable(KursachNew
    sources/main.cpp
    sources/MainWindow.cpp
    sources/CinemaSystem.cpp
    sources/Movie.cpp
    sources/CinemaHall.cpp
    sources/Session.cpp
    sources/Customer.cpp
    sources/Person.cpp
    sources/Ticket.cpp
    sources/Booking.cpp
    sources/BookingDialog.cpp
    sources/SessionDialog.cpp
    sources/HallDialog.cpp
    sources/MovieDialog.cpp
    sources/HallMapDialog.cpp
    sources/MovieService.cpp
    sources/SessionService.cpp
    sources/BookingService.cpp
    sources/CustomerService.cpp
)

target_link_libraries(KursachNew Qt5::Widgets)
