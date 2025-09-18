#include <iostream>

int main() {
    int num_year;
    std::cout << "Enter a year: " <<std::endl;
    std::cin >> num_year;
    if (num_year % 4 == 0 && num_year % 100 != 0 || num_year % 400 == 0) {
        std::cout << num_year << " is a leap year" << std::endl;
    }
    else {
        std::cout << num_year << " is not a leap year" << std::endl;
    }

    return 0;
}