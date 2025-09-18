#include <iostream>

int main() {
    double a, b, c;
    double discriminant, x1, x2;
    std::cout << "Enter the value of a: " <<std::endl;
    std::cin >> a;
    std::cout << "Enter the value of b: " <<std::endl;
    std::cin >> b;
    std::cout << "Enter the value of c: " <<std::endl;
    std::cin >> c;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "x1 = " << x1 << " " << "x2 = " << x2 <<  std::endl;
    }
    else if (discriminant == 0) {
        x1 = (-b) / (2 * a);
        std::cout << "x1 = x2 = " << x1 << std::endl;
    }
    else {
        std::cout << "No solution" << std::endl;

    }

    return 0;
}