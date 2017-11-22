#ifndef SORTINGALGORITHMS_INSERTIONSORT_HPP
#define SORTINGALGORITHMS_INSERTIONSORT_HPP

#include <vector>
#include <iostream>
#include "../helperClasses/Input.hpp"

class InsertionSort {

public:
    InsertionSort();
    void doInsertionSort(std::vector<int>);
    void printSortedArray();
    std::vector<int> getSortedArray();

private:
    std::vector<int> sortedArray;
    std::vector<int> unsortedArray;
};
#endif //SORTINGALGORITHMS_INSERTIONSORT_HPP
