cmake_minimum_required(VERSION 3.27)
project(CTG C)

set(CMAKE_C_STANDARD 23)

add_executable(CTG main.c
        GTC/permutation/permutation.h
        GTC/permutation/permutation.c
        GTC/array_functions/array_functions.h
        GTC/array_functions/array_functions.c
        GTC/utility_functions/utility_functions.h
        GTC/utility_functions/utility_functions.c)
