#include <iostream>

int main(int argc, char const *argv[])
{
    int num = 3;

    if (num > 5)
    {
        //if the given condition is true
        std::cout << "The given If Condition is satisfied.\n";
        std::cout << "The given number greater than 5." << std::endl;
    }
    std::cout << "The given Number is: " << num << std::endl;
    return 0;
}