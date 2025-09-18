#include <iostream>

int main() {
    double x, y;
    std::cout << "Enter the x-coordinate: ";
    std::cin >> x;
    std::cout << "Enter the y-coordinate: ";
    std::cin >> y;
    if (x*x + y*y <= 10*10) {
        std::cout << "(" << x << ", " << y << ") is in circle" << std::endl;
    }
    else {
        std::cout << "(" << x << ", " << y << ") is not in circle" << std::endl;
    }

    return 0;
}