cmake_minimum_required(VERSION 4.3)
project(sudokusolver C)

set(CMAKE_C_STANDARD 11)

add_executable(sudokusolver main.c
        board.c
        board.h)
