#include <iostream>

// Solution 1 : Program to Swap Numbers (using Three Variables)
void swapThree(int &a, int &b);
// Solution 2 : Program to Swap Numbers (using Two Variables)
void swapTwo(int &a, int &b);

int main(int argc, char const *argv[])
{
    int num1, num2, temp;

    std::cout << "Enter any two numbers to be swapping\n: ";
    std::cin >> num1 >> num2;

    std::cout << "Numbers Before Swapping.\n";
    std::cout << "Num1: " << num1 << ", num2: " << num2 << std::endl;

    // swapTwo(num1, num2);
    swapThree(num1, num2);

    std::cout << "\nNumbers After swapping.\n";
    std::cout << "Num1: " << num1 << ", num2: " << num2 << std::endl;

    
    return 0;
}

// Solution 1 : Program to Swap Numbers (using Three Variables)
void swapThree(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// Solution 2 : Program to Swap Numbers (using Two Variables)
void swapTwo(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}