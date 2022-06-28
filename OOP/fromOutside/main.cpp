#include <iostream>

class addition
{
    private:
        int n1;
        float n2;
        float res;
    public:
        void get_data();
        float calc_add();
};

void addition::get_data()
{
    std::cout << "\nEnter the two number to be added: ";
    std::cin >> n1 >> n2;
}

float addition::calc_add()
{
    res = n1 + n2;

    std::cout << "\n Result of two numbers: " << res;
}

int main(int argc, char const *argv[])
{
    addition a;

    a.get_data();
    a.calc_add();

    return 0;
}