#include <iostream>

int main(int argc, char const *argv[])
{
    int base, height;
    float area;

    std::cout << "Enter Base of triangle\n: ";
    std::cin >> base;

    std::cout << "Enter Height of triangle\n: ";
    std::cin >> height;

    area = 0.5 * base * height;

    std::cout << "Area of triangle for given base and height is\n: " << area << " units\n";

    return 0;
}