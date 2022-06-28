#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc, char const *argv[])
{
    int num, max_value, rand_num;

    do
    {
        std::cout << "\nEnter the number of random numbers you want: ";
        std::cin >> num;

        std::cout << "\nEnter the maximum value of random numbers: ";
        std::cin >> max_value;

        std::cout << "\nRandom numbers from 0 to " << max_value << " are: " << std::endl;

        for (int i(0); i <= num; ++i)
        {
            std::srand(std::time(0));
            rand_num = rand() % max_value;
            std::cout << rand_num << std::endl;
        }
    } while(num != 15);


// int rand(int min, int max)
// {
//   return std::rand() % (max + 1 - min) + min;
// }

// int rand(int min, int max)
// {
//     std::srand(std::time(0));
//     return std::rand() % (max + 1 - min) + min;
// }


    return 0;
}