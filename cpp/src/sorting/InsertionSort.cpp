#include "InsertionSort.hpp"

InsertionSort::InsertionSort() {
    Input inputObj;

    unsortedArray = inputObj.takeInput();

    doInsertionSort(unsortedArray);
}

void InsertionSort::doInsertionSort(std::vector<int>array) {
    int key = 0;
    int i = 0;

    for(int j = 1; j < array.size(); ++j) {
        key = array[j];

        i = j - 1;

        while(i > -1 && array[i] > key) {

            array[i + 1] = array[i];

            i = i - 1;

            array[i + 1] = key;
        }
    }
    sortedArray = array;
}

void InsertionSort::printSortedArray() {
    std::cout << "Unsorted Array: ";

    for (int i : unsortedArray) {
        std::cout << i << " ";
    }

    std::cout << std::endl;
    std::cout << "Sorted array: ";
    for (int i : sortedArray) {
        std::cout << i << " ";
    }
}

std::vector<int> InsertionSort::getSortedArray() {
    return sortedArray;
}


