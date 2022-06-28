#include <iostream>

int addition(int, int);
int subtract(int, int);

int main()
{
    int num1, num2, add, sub;

    std::cout << "Enter two numbers to add: ";
    std::cin >> num1 >> num2;

    add = addition(num1, num2);
    sub = subtract(num1, num2);

    std::cout << "\nAddition of numbers is: " << add;
    std::cout << "\nSubtraction of numbers: " << sub << "\n";

    return 0;
}

int addition(int a, int b)
{
    int add;
    add = a + b;

    return add;
}

int subtract(int a, int b)
{
    int sub;
    sub = a - b;

    return sub;
}