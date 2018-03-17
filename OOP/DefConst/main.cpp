#include <iostream>

class Student
{
    public:
        char name;
        int roll_no;
        int marks;

        // Default Constructor
        Student();

        void display_data()
        {
            std::cout << "Values from default constructor are: " << std::endl;
            std::cout << "Name: " << name << std::endl;
            std::cout << "Roll No: " << roll_no << std::endl;
            std::cout << "Marks: " << marks << std::endl;
        }
};

Student::Student()
{
    name = 'A';
    roll_no = 1;
    marks = 1;
}

int main()
{
    Student s; // Invoke Default Constructor
    s.display_data();

    return 0;
}