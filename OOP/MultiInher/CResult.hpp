#ifndef CRESULT_HPP
#define CRESULT_HPP

#include "CAcademics.hpp"

class CResult:public CAcademics
{
    int total;

    public:
        void total_marks();
        void display_details();
};

#endif // CRESULT_HPP