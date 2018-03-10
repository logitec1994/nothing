#include <iostream>

int main(int argc, char const *argv[])
{
    int digt;

    std::cout << "Enter any number\n: ";
    std::cin >> digt;

    // if n is completely divisible by 2 then num is a even number else odd
    if( digt % 2 == 0 )
        std::cout << "The entered number is Even.\n";
    else
        std::cout << "The entered number is Odd.\n";

    return 0;
}