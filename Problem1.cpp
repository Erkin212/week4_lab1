#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: " <<std::endl;
    std::cin >> number;
    if (number>=0) {
        std::cout << "Positive" << std::endl;
    }
    else {
        std::cout << "Negative" << std::endl;
    }

    return 0;
}