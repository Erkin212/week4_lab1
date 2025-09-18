#include <iostream>

int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        std::cout << "Lowercase alphabet" << std::endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        std::cout << "Uppercase alphabet" << std::endl;
    }
    else {
        std::cout << "It is not an alphabet" << std::endl;
    }
}