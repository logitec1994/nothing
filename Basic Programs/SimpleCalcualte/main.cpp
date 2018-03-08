#include <iostream>

int main()
{
    int digt1, digt2, add, sub, mul;
    float div;

    std::cout << "Enter any two Numbers\n: ";
    std::cin >> digt1 >> digt2;

    add = digt1 + digt2;
    sub = digt1 - digt2;
    mul = digt1 * digt2;
    div = digt1 / (float)digt2; // typecasting digt2 to float

    std::cout << "Addition of the two numbers is: "       << add << "\n";
    std::cout << "Subtraction of the two numbers is: "    << sub << "\n";
    std::cout << "Multiplication of the two numbers is: " << mul << "\n";
    std::cout << "Division of the two numbers is: "       << div << "\n";

    return 0;
}