cmake_minimum_required(VERSION 3.19)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled
        main.cpp
        domain/route.cpp
        domain/route.h
        domain/station.cpp
        domain/station.h
        domain/passenger.cpp
        domain/passenger.h
        domain/classic_taxi.cpp
        domain/classic_taxi.h
        domain/taxi_base.h
        logic/town_logic.cpp
        logic/town_logic.h)