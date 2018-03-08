#include <iostream>

int main(int argc, char const *argv[])
{
    int num = 25;

    // check for the if condition
    if (num > 50)
    {
        // if condition is true then
        std::cout << "The given number is greater than 50" << std::endl;
    } else
    {
        //if condition is false then
        std::cout << "The given number is not greater than 50" << std::endl;
    }

    std::cout << "value of given number is: " << num << std::endl;

    return 0;
}