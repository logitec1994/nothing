#include <iostream>

int main(int argc, char const *argv[])
{
    int x = 5;

    // loop execution starts here
    do
    {
        std::cout << "Value of x becomes: " << x << std::endl;
        x++;
    } while(x < 10);
    return 0;
}