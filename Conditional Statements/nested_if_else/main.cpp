#include <iostream>

int main(int argc, char const *argv[])
{
    int marks;

    std::cout << "Enter your marks obitained: ";
    std::cin >> marks;

    if (marks > 100)
    {
        // marks greater than 100
        std::cout << "Enter the correct marks.\n";
    } else if (marks >= 80)
    {
        // marks between 80 & 99
        std::cout << "You have Obitained Grade A\n";
    } else if (marks >= 70)
    {
        // marks between 70 & 79
        std::cout << "You have Obitained Grade B\n";
    } else if (marks >= 50)
    {
        // marks between 50 & 69
        std::cout << "You have Obitained Grade B\n";
    } else if (marks >= 35)
    {
        // marks between 35 & 49
        std::cout << "You have Obitained Grade D\n";
    } else
    {
        // marks less than 35
        std::cout << "You have Obitained Grade E\n";
    }
    return 0;
}