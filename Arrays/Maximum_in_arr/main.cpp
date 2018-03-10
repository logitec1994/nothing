#include <iostream>

int main(int argc, char const *argv[])
{
    int arr[100], maximum, size, position = 1;

    std::cout << "Enter the number of elements in array: ";
    std::cin >> size;

    std::cout << "Enter the elements in array\n: ";

    for (int i = 0; i < size; i++)
        std::cin >> arr[i];

    // default maximum
    maximum = arr[0];

    // assuming first no. as maximum
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
            position = i+1;
            // if any no. agreater than maximum found then set it as maximum and save its location

        }
    }

    std::cout << "Maximum element in array is present at position " << position << " and is't value is: " << maximum << "\n";

    return 0;
}