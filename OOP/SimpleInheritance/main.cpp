#include <iostream>

class Base
{
    int a;

    public:
        int b;
        int c;

    void get_data();
    int get_a(void);
    void show_data();
};

class Derived:public Base
{
    public:
        void add();
};

void Base::get_data()
{
    std::cout << "Enter the numbers to be added: ";
    std::cin >> a >> b;
}

int Base::get_a()
{
    return a;
}

void Derived::add()
{
    c = get_a()+b;
}

void Base::show_data()
{
    std::cout << "\n Value of a: " << get_a() << ", value of b: " << b;
    std::cout << "\n Addition of numbers is: " << c << "\n";
}

int main(void)
{
    Derived d;

    d.get_data();
    d.add();
    d.show_data();

    return 0;
}