#include <iostream>

int main()
{
    int i, n, num, sum, c, value;
    sum = 0;

    std::cout << "Enter the number of integers you want to add\n: ";
    std::cin >> num;

    std::cout << "You have entered number " << num << "\n";

    for (i = 1; i <= num; i++)
    {
        std::cin >> n;
        sum += n;
    }

    std::cout << "Addition of entered num is: " << sum << "\n";

    return 0;
}