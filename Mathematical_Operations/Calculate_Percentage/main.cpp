#include <iostream>

int main(int argc, char const *argv[])
{
    int s1, s2, s3, s4, s5, sum, total = 750;
    float percentage;

    std::cout << "Enter marks of 5 subject\n: ";
    std::cin >> s1 >> s2 >> s3 >> s4 >> s5;

    sum = s1 + s2 + s3 + s4 + s5;

    std::cout << "\nTotal marks obtained: " << sum;

    percentage = (sum * 100) / total;

    std::cout << "\n\nPercentage obtained: " << percentage << "%\n";

    return 0;
}