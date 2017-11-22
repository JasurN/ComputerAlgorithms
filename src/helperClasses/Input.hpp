#ifndef SORTINGALGORITHMS_INPUT_HPP
#define SORTINGALGORITHMS_INPUT_HPP

#include <vector>
#include <iostream>
#include <cstdlib>
/**
 * Class Input is provided to help with number and making random manipation.
 */
class Input {
public:
    std::vector<int> takeInput();
    std::vector<int> takeSize(int);
    std::vector<int> randomize(int);
    std::vector<int> takeInputFromUser(int);
private:
};
#endif //SORTINGALGORITHMS_INPUT_HPP
