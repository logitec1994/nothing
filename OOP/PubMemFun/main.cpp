#include <iostream>

class student_data
{
public:
    char name[50];
    int roll_no;

    void get_data();
    int display_data();
};

void student_data::get_data()
{
    std::cout << "\nEnter your name: ";
    std::cin >> name;

    std::cout << "\nEnter your roll no: ";
    std::cin >> roll_no;
}

int student_data::display_data()
{
    std::cout << "\nStudent details.\n";
    std::cout << "Name: " << name;
    std::cout << "\nRoll no: " << roll_no << "\n";
}

int main()
{
    student_data s1, s2;

    s1.get_data();
    s2.get_data();

    s1.display_data();
    s2.display_data();

    return 0;
}