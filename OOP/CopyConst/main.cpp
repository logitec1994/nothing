#include <iostream>

class Student
{
    public:
        char name;
        int roll_no;
        int marks;

        // Default Constructor
        Student()
        {
            name = 'A';
            roll_no = 1;
            marks = 1;
        }

        // Copy Constructor
        Student(const Student &obj)
        {
            name = obj.name;
            roll_no = obj.roll_no;
            marks = obj.marks;
        }


        void display_data()
        {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Roll No: " << roll_no << std::endl;
            std::cout << "Marks: " << marks << std::endl;
        }
};

int main()
{
    Student s1; // Default Constructor
    Student s2 = s1; // copy Constructor

    // Def
    s1.display_data();
    // Copy
    s2.display_data();

    return 0;
}