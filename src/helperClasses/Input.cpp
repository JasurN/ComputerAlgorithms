#include "Input.hpp"


std::vector Input::takeInput() {
    std::vector<int> takenArray;

    int choice = -1;
    int size = -1;

    std::cout << "Please enter the type of input\n"
            "1 - Computer will generate random number\n"
            "2 - User will input numbers\n";

    std::cin >> choice;

    if (choice < 3 && choice > 0) {
        std::cout << "Please give the size of array (size > 0)\n";
        std::cin >> size;

        if (choice == 1) {
            randomize(size);
        }
        else if (choice == 2){
            takeInputFromUser(size);
        }
    }
    else {
        takeInput();
    }

    return takenArray;
}

std::vector Input::randomize(int size) {
    std::vector<int> randomArray(size);

    srand((unsigned) time(0));

    for (auto i = 0; i < size; ++i) {
        randomArray[i] = (rand() % 100) + 1;
    }

    return randomArray;
}

std::vector Input::takeInputFromUser(int size) {
    std::vector<int> takenArray(size);

    std::cout << "Please enter " << size << " number of elements\n";
    for (auto i = 0; i < size; ++i) {
        std::cin >> takenArray[i];
    }

    return takenArray;
}

