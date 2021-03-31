cmake_minimum_required(VERSION 3.14)
project(jinx C)

set(CMAKE_C_STANDARD 99)

add_executable(jinx main.c base_sort/sort.c base_sort/sort.h question/small_sum.c question/small_sum.h question/revert_pair.c question/revert_pair.h)