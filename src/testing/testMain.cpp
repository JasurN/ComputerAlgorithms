#include "../helperClasses/Input.hpp"

int main(){
    Input inputObj;
    std::vector<int> array;
    array = inputObj.takeInput();

    for (int i : array) {
        std::cout << i << " ";
    }

    return 0;
}
