cmake_minimum_required(VERSION 3.23)
project(Assigment_3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Assigment_3
        BubbleSort.cpp
        BubbleSort.h
        InsertionSort.cpp
        InsertionSort.h
        main.cpp
        MergeSort.cpp
        MergeSort.h
        QuickSort.cpp
        QuickSort.h
        RadixSort.cpp
        RadixSort.h
        SelectionSort.cpp
        SelectionSort.h)
