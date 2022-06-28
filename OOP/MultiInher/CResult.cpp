#include <iostream>
#include "CResult.hpp"

void CResult::total_marks()
{
    get_details();
    get_marks();
    total = maths + science + english;
}

void CResult::display_details()
{
    std::cout << "\n\nStudent Recors";
    std::cout << "\n Name: " << name << "\n Roll no: " << roll_no << "\n Total Marks: " << total;
}