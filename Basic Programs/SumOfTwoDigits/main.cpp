#include <iostream>

int main()
{
    int d1, d2, sum;

    std::cout << "Enter any two numbers you want to add\n: ";
    std::cin >> d1 >> d2;

    sum = d1 + d2;

    // performing addition of numbers
    std::cout << "Addition of two numbers is: " << sum << "\n";

    return 0;
}