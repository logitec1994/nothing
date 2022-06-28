#include <iostream>

int main(int argc, char const *argv[])
{
    int x = 30;
    int y = 75;

    switch(x)
    {
        case 30:
                std::cout << "This Outer Switch case. Value of x is 30\n";

                switch(y)
                {
                    case 75:
                            std::cout << "This Inner Switch case. Value of y is 75\n";
                }
    }
    return 0;
}