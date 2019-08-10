cmake_minimum_required(VERSION 3.8)
project(SortingAlgorithms)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES cpp/src/main.cpp cpp/src/sorting/InsertionSort.cpp cpp/src/sorting/InsertionSort.hpp cpp/src/sorting/QuickSort.cpp cpp/src/sorting/QuickSort.hpp cpp/src/sorting/MergeSort.hpp cpp/src/sorting/MergeSort.cpp cpp/src/sorting/RadixSort.hpp cpp/src/sorting/RadixSort.cpp cpp/src/sorting/BucketSort.hpp cpp/src/sorting/BucketSort.cpp cpp/src/helperClasses/Input.cpp cpp/src/helperClasses/Input.hpp cpp/src/testing/testMain.cpp cpp/src/sorting/HeapSort.hpp cpp/src/sorting/HeapSort.cpp cpp/src/helperClasses/Timer.cpp cpp/src/helperClasses/Timer.hpp
           leetcode/ToLowercase.cpp)
add_executable(SortingAlgorithms ${SOURCE_FILES})