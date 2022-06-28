#include <iostream>
#include "CAcademics.hpp"

void CAcademics::get_marks()
{
    std::cout << "\nEnter the subject marks: ";
    std::cin >> maths >> science >> english;
}
