#include "Input.hpp"


std::vector<int> Input::takeInput() {
    std::vector<int> takenArray;

    int choice = -1;

    std::cout << "Please enter the type of input\n"
            "1 - Computer will generate random number\n"
            "2 - User will input numbers\n"
            "Input: ";

    std::cin >> choice;

    if (choice < 3 && choice > 0) {
        takenArray = takeSize(choice);
    } else {
        std::cout << "You have entered wrong choice\n"
                "Please Re-enter your choice\n\n";

        takenArray = takeInput();
    }

    return takenArray;
}

std::vector<int> Input::takeSize(int choice) {
    std::vector<int> array;
    int size = -1;

    std::cout << "Please give the size of array (size > 0)\n"
            "Size: ";
    std::cin >> size;
    if (size > 0 && size < 1000000) {

        if (choice == 1) {
            array = randomize(size);
        }
        else if (choice == 2) {
            array = takeInputFromUser(size);

            std::cout << "You have entered negative size\n"
                    "Please Re-enter the size\n\n";
        }
    }
    else {
        takeSize(choice);
    }

        return array;
}

std::vector<int> Input::randomize(int size) {
    std::vector<int> randomArray(size);

    srand((unsigned) time(0));

    for (auto i = 0; i < size; ++i) {
        randomArray[i] = (rand() % 100) + 1;
    }

    return randomArray;
}

std::vector<int> Input::takeInputFromUser(int size) {
    std::vector<int> takenArray(size);

    std::cout << "Please enter " << size << " number of elements\n";
    for (auto i = 0; i < size; ++i) {
        std::cin >> takenArray[i];
    }

    return takenArray;
}