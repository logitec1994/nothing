#include <iostream>

int main(int argc, char const *argv[])
{
    int gross_salary, basic, da, ta;

    std::cout << "Enter your basic salary\n: ";
    std::cin >> basic;

    da = (10 * basic) / 100;
    ta = (12 * basic) / 100;

    gross_salary = basic + da + ta;

    std::cout << "\n Your Gross salary is: " << gross_salary << "\n";
    return 0;
}