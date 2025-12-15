cmake_minimum_required(VERSION 3.10)
project(cinema_system)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 REQUIRED COMPONENTS Widgets)

# Перечислите ВСЕ ваши файлы
add_executable(cinema_system
    main.cpp
    MainWindow.cpp
    MainWindow.h
    CinemaSystem.cpp
    CinemaSystem.h
    Movie.cpp
    Movie.h
    CinemaHall.cpp
    CinemaHall.h
    Session.cpp
    Session.h
    Customer.cpp
    Customer.h
    Person.cpp
    Person.h
    Ticket.cpp
    Ticket.h
    Booking.cpp
    Booking.h
    BookingDialog.cpp
    BookingDialog.h
    SessionDialog.cpp
    SessionDialog.h
    HallDialog.cpp
    HallDialog.h
    MovieDialog.cpp
    MovieDialog.h
    HallMapDialog.cpp
    HallMapDialog.h
    MovieService.cpp
    MovieService.h
    SessionService.cpp
    SessionService.h
    BookingService.cpp
    BookingService.h
    CustomerService.cpp
    CustomerService.h
    CinemaException.h
    DateUtils.h
    EmailValidator.h
    PriceFormatter.h
)

target_link_libraries(cinema_system Qt5::Widgets)
