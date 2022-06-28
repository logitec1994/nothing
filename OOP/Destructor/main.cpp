#include <iostream>

int count = 0;

class Student
{
    public:
        char name;
        int roll_no;
        int marks;

        // Default Constructor
        Student()
        {
            count++;
            std::cout << "\nConstructor Called!";
            std::cout << "\nConstructor called " << count << " times.\n";

            name    = 'A';
            roll_no = 0;
            marks   = 0;
        }

        void display_data()
        {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Roll No: " << roll_no << std::endl;
            std::cout << "Marks: " << marks << std::endl;
        }

        // Destructor
        ~Student()
        {
            std::cout << "\n\nDestructor Called!\nAll values destroyed";
            std::cout << "\nDestructor called " << count << " times.\n";
            count--;
        }
};

int main()
{
    Student s1; // Default Constructor

    s1.display_data();

    Student s2;

    s2.display_data();

    return 0;
}