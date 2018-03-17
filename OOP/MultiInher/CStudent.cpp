#include <iostream>
#include "CStudent.hpp"

void CStudent::get_details()
{
    std::cout << "Enter Student Details";
    std::cout << "\nEnter your name: ";
    std::cin >> name;
    std::cout << "\nEnter your Roll no: ";
    std::cin >> roll_no;
}