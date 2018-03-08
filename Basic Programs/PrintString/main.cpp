#include <iostream>

int main()
{
    char strArray[100]; // variable definition and initialization

    std::cout << "Enter a String you want to print: ";
    // std::cin >> strArray; <--- what for it...?
    std::cin.getline(strArray, 80);


    std::cout << "The String Entered is: " << strArray << std::endl;

    return 0;
}