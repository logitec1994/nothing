#ifndef CSTUDENT_HPP
#define CSTUDENT_HPP

// Base class
class CStudent
{
    protected:
        char name[20];
        int roll_no;

    public:
        void get_details();
};

#endif // CSTUDENT_HPP