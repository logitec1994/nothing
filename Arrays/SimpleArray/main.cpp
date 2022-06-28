#include <iostream>

int main(int argc, char const *argv[])
{
    int arr[5]; // it will be more correct to declare a constant to determine the size of an array
    // const int size = 5;

    std::cout << "Enter 5 numbers\n: ";

    //Storing 5 numbers entered by user in an array using for loop.
    for (int i = 0; i < 6; ++i)
        std::cin >> arr[i];

    std::cout << "\nFirst number: " << arr[0]; // first element of an array is n[0]

    std::cout << "\nLast numbers: " << arr[5] << "\n"; //last element of an array is n[size - 1]
    return 0;
}