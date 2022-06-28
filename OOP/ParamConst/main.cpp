#include <iostream>

class Student
{
    public:
        char name;
        int roll_no;
        int marks;

        // Parametrized Constructor
        Student(char Fname, int rollno, int score)
        {
            name = Fname;
            roll_no = rollno;
            marks = score;
        }

        void display_data()
        {
            std::cout << "Values from Parametrized constructor are: " << std::endl;
            std::cout << "Name: " << name << std::endl;
            std::cout << "Roll No: " << roll_no << std::endl;
            std::cout << "Marks: " << marks << std::endl;
        }
};

int main()
{
    Student s('Z', 1, 45); // Invoke Parametrized Constructor
    s.display_data();

    return 0;
}