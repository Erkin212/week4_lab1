#include <iostream>

int main() {
    double weight1, cost1;
    double weight2, cost2;
    std::cout << "Enter weight and cost for package 1: " << std::endl;
    std::cin >> weight1 >> cost1;
    std::cout << "Enter weight and cost for package 2: " << std::endl;
    std::cin >> weight2 >> cost2;
    if (weight1 / cost1 < weight2 / cost2) {
        std::cout << "Package 2 has a better price" << std::endl;
    }
    else if (weight1 / cost1 == weight2 / cost2) {
        std::cout << "Package 1 and Package 2 have the same price" << std::endl;
    }
    else {
        std::cout << "Package 1 has a better price" << std::endl;
    }

    return 0;
}