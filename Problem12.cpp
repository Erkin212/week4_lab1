#include <iostream>

int main() {
    int palindrome_num;
    std::cout << "Enter a three-digit number: ";
    std::cin >> palindrome_num;
    if (palindrome_num % 10 == palindrome_num / 100) {
        std::cout << palindrome_num << " is a palindrome" << std::endl;
    }
    else {
        std::cout << palindrome_num << " is not a palindrome" << std::endl;
    }

    return 0;
}