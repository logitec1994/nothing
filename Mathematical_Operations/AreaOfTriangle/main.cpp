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

    return 0;
}