cmake_minimum_required(VERSION 3.8)
project(SortingAlgorithms)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES src/main.cpp src/sorting/InsertionSort.cpp src/sorting/InsertionSort.hpp src/sorting/QuickSort.cpp src/sorting/QuickSort.hpp src/sorting/MergeSort.hpp src/sorting/MergeSort.cpp src/sorting/RadixSort.hpp src/sorting/RadixSort.cpp src/sorting/BucketSort.hpp src/sorting/BucketSort.cpp src/helperClasses/Input.cpp src/helperClasses/Input.hpp src/testing/testMain.cpp)
add_executable(SortingAlgorithms ${SOURCE_FILES})