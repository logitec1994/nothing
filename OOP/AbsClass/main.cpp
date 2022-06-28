#include <iostream>

class Base_class // abstract class
{
    public:
        virtual void show_data() = 0; // Pure Virtual Function
};

class Derived_class:public Base_class
{
    public:
        void show_data()
        {
            std::cout << "This is a simple example!";
        }
};

int main()
{
    Derived_class baseobj;
    Derived_class dobj;

    Base_class *b;

    b = &dobj;

    b->show_data();

    baseobj.show_data();

    return 0;
}