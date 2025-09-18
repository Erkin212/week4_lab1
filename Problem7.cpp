#include <iostream>

int main() {
    double a, b, c;
    std::cout << "Enter the values of angles: " <<std::endl;
    std::cin >> a >> b >> c;
    if (a + b + c == 180) {
        std::cout << "The triangle is valid" << std::endl;
    }
    else {
        std::cout << "The triangle is not valid" << std::endl;
    }
}