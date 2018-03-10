#include <iostream>

int main(int argc, char const *argv[])
{
    int arr[100], minimum, size, position = 1;

    std::cout << "Enter the number of elements in array: ";
    std::cin >> size;

    std::cout << "Enter the elements in array\n: ";

    for (int i = 0; i < size; i++)
        std::cin >> arr[i];

    // default minimum
    minimum = arr[0];

    // assuming first no. as minimum
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < minimum)
        {
            minimum = arr[i];
            position = i+1;
            // if any no. lesser than maximum found then set it as minimum and save its location

        }
    }

    std::cout << "minimum element in array is present at position " << position << " and is't value is: " << minimum << "\n";

    return 0;
}