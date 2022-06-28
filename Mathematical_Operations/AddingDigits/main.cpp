#include <iostream>

int main(int argc, char const *argv[])
{
    int num, remainder;
    int sum = 0;

    std::cout << "Enter an Number\n: ";
    std::cin >> num;

    while ( num != 0 )
    {
        remainder = num % 10; // stores unit place digit as remainder
        sum += remainder;
        num /= 10; // divide no to discard unit place digit
    }

    std::cout << "Sum of entered numbers is: " << sum << std::endl;
    return 0;
}