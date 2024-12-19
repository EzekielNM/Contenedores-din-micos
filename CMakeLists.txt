cmake_minimum_required(VERSION 3.29)
project(Contenedores_din_micos)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Contenedores_din_micos
    main.cpp
    main.h
        "ejercicio 1/Ejercicio1.cpp"
        ejercicio2/Ejercicio2.cpp
        ejercicio3/Ejercicio3.cpp
        ejercicio4/Ejercicio4.cpp
        ejercicio5/Ejercicio5.cpp
        ejercicio6/Ejercicio6.cpp)
