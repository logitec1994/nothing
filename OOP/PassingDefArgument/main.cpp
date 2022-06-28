#include <iostream>

void display(char='C', int=10);

int main()
{
    std::cout << "No arguments is passed to the function:\n";
    display();

    std::cout << "Single arguments is passed to the function:\n";
    display('+');
    
    std::cout << "Both arguments is passed to the function:\n";
    display('+', 5);

    return 0;
}

void display(char c, int n)
{
    for(int i = 1; i <= n; ++i)
        std::cout << c;
    std::cout << std::endl;
}