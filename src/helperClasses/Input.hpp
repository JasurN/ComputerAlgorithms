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

    std::vector takeInput();
    std::vector randomize(int size);
    std::vector takeInputFromUser(int size);
private:
};
#endif //SORTINGALGORITHMS_INPUT_HPP
