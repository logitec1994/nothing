#include <iostream>

class Student
{
    protected:
        char name[100];
        double roll_no;

    void get_details();
};

class academic:public Student
{
    public:
        double marks;

        void academic_details();
        void display();
};

void academic::academic_details()
{
    get_details();

    std::cout << "\nEnter your marks: ";
    std::cin >> marks;
}

void academic::display()
{
    std::cout << "\n Student details.\n";

    std::cout << "Name: " << name;
    std::cout << "\nRoll No: " << roll_no;
    std::cout << "\nmarks: " << marks;
}

void Student::get_details()
{
    std::cout << "\nEnter your name: ";
    std::cin >> name;

    std::cout << "\nEnter your roll no: ";
    std::cin >> roll_no;
}

int main(int argc, char const *argv[])
{
    academic a;

    a.academic_details();

    a.display();
    return 0;
}
