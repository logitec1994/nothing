#include <iostream>

int main(int argc, char const *argv[])
{
    int x = 1;
    int y = 10;
    int z = 5;

    // check for condition
    if ( x < z )
    {
        // if condition is true then check the following
        if ( x < z )
        {
            if ( y > z)
            {
                // if condition is true then print the following
                std::cout << "Value of z is greater than x but less than y.\n";
            }
        }
    }

    std::cout << "Value of x is: " << x << std::endl;
    std::cout << "Value of y is: " << y << std::endl;
    std::cout << "Value of z is: " << z << std::endl;
    return 0;
}