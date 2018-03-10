#include <iostream>

int main(int argc, char const *argv[])
{
    int num1, num2, num3;

    std::cout << "Enter any three numbers\n: ";
    std::cin >> num1 >> num2 >> num3;

    // if num1 is greater
    if (num1 > num2 && num1 > num3)
        std::cout << "The Greater number from the given three numbers is " << num1 << "\n";

    // if num2 is greater
    if (num2 > num1 && num2 > num3)
        std::cout << "The Greater number from the given three numbers is " << num2 << "\n";

    // if num3 is greater
    if (num3 > num1 && num3 > num2)
        std::cout << "The Greater number from the given three numbers is " << num3 << "\n";

    // if num1 = num2 = num3
    if (num1 == num2 && num2 == num3)
        std::cout << "Numbers of the same value: " << num1 << "\n";

    
    return 0;
}