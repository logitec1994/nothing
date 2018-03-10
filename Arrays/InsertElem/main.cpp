#include <iostream>

int main(int argc, char const *argv[])
{
    int arr[100], position, i, n, value;

    std::cout << "Enter number of elements in array (from 1): ";
    std::cin >> n;

    std::cout <<"\nEnter the elements in array\n: ";
    for (i = 0; i < n; ++i)
        std::cin >> arr[i];

    std::cout << "Enter the position of element in the array: ";
    std::cin >> position;

    std::cout << "Enter the element at position " << position << " : ";
    std::cin >> value;

    for (i = n - 1; i >= position - 1; --i)
        arr[i+1] = arr[i];

    //from given position shifting all elements by 1 position
    arr[position-1] = value;

    // inserting value to given position
    std::cout << "\nResultant array is:\n";

    for (i = 0; i <= n; ++i)
        std::cout << arr[i] << " ";

    std::cout << std::endl;

    return 0;
}