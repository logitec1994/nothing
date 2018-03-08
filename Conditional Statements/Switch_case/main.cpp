#include <iostream>

int main(int argc, char const *argv[])
{
    char grade;

    std::cout << "Enter the grade obtained (A/B/C/D/E)\n: ";
    std::cin >> grade;

    switch(grade)
    {
        case 'A':
                std::cout << "Excellent!\n";
                break;

        case 'B':
                std::cout << "Well done.\n";
                break;

        case 'C':
                std::cout << "Average.\n";
                break;

        case 'D':
                std::cout << "You passed.\n";
                break;

        case 'E':
                std::cout << "Better try again.\n";
                break;
        default:
                std::cout << "Invalid grade. \n";
    }
    return 0;
}