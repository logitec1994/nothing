#include <iostream>

class demo
{
    int demo;
    static int count;

    public:
        void setdemo(void)
        {
            demo = ++count;
        }
        void showdemo(void)
        {
            std::cout << "Object number: " << demo << std::endl;
        }

        static void show_count()
        {
            std::cout << "Coutn: " << count << std::endl;
        }
};

int demo::count;

int main(int argc, char const *argv[])
{
    demo d1, d2;

    d1.setdemo();
    d2.setdemo();
    d2.setdemo();

    demo::show_count();
    d1.show_count();

    d1.showdemo();
    d2.showdemo();
    d2.showdemo();
    d1.showdemo();

    return 0;
}