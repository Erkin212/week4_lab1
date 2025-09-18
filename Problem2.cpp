#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: " <<std::endl;
    std::cin >> number;
    if (number>=0) {
        if (number % 2 == 0) {
            std::cout << "The number is positive and even" << std::endl;
        }
        else {
            std::cout << "The number is positive and odd" << std::endl;
        }
    }
    else {
        if (number % 2 == 0) {
            std::cout << "The number is negative and even" << std::endl;
        }
        else {
            std::cout << "The number is negative and odd" << std::endl;
        }
    }

    return 0;
}