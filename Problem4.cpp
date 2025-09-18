#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter the first number: " << std::endl;
    std::cin >> num1;
    std::cout << "Enter the second number: " << std::endl;
    std::cin >> num2;
    if (num1 % num2 == 0) {
        std::cout << num1 << " is divisible by " << num2 << std::endl;
    }
    else {
        std::cout << num1 << " is not divisible by " << num2 << std::endl;
    }
}