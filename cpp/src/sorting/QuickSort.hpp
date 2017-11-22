#ifndef SORTINGALGORITHMS_QUICKSORT_HPP
#define SORTINGALGORITHMS_QUICKSORT_HPP

#include <vector>

class QuickSort {
public:

    void printSortedArray();
    std::vector<int> getSortedArray();

private:
    std::vector<int> sortedArray;
    std::vector<int> unsortedArray;
};
#endif //SORTINGALGORITHMS_QUICKSORT_HPP
