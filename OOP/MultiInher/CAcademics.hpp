#ifndef CACADEMICS_HPP
#define CACADEMICS_HPP

#include "CStudent.hpp"

class CAcademics:public CStudent
{
    protected:
        int maths, science, english;

    public:
        void get_marks();
};

#endif // CACADEMICS_HPP