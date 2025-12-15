cmake_minimum_required(VERSION 3.10)
project(KursachNew)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

include_directories(${CMAKE_SOURCE_DIR}/KursachNew/headers)

add_executable(KursachNew
    KursachNew/sources/main.cpp
    KursachNew/sources/MainWindow.cpp
    KursachNew/sources/CinemaSystem.cpp
    KursachNew/sources/Movie.cpp
    KursachNew/sources/CinemaHall.cpp
    KursachNew/sources/Session.cpp
    KursachNew/sources/Customer.cpp
    KursachNew/sources/Person.cpp
    KursachNew/sources/Ticket.cpp
    KursachNew/sources/Booking.cpp
    KursachNew/sources/BookingDialog.cpp
    KursachNew/sources/SessionDialog.cpp
    KursachNew/sources/HallDialog.cpp
    KursachNew/sources/MovieDialog.cpp
    KursachNew/sources/HallMapDialog.cpp
    KursachNew/sources/MovieService.cpp
    KursachNew/sources/SessionService.cpp
    KursachNew/sources/BookingService.cpp
    KursachNew/sources/CustomerService.cpp
)

target_link_libraries(KursachNew Qt5::Widgets)
