#include <iostream>

int main(int argc, char const *argv[])
{
    int i, j, n, arr1[100], arr2[100];

    std::cout << "Enter the number of elements in array\n: ";
    std::cin >> n;

    std::cout << "\nEnter the array elements\n: ";
    for (i = 0; i < n; ++i)
        std::cin >> arr1[i];

    // Copying reversed array into original.
    for (i = i - 1, j = 0; i >= 0; --i, ++j)
        arr2[j] = arr1[i];

    // modifying original array, this is optional.
    for (i = 0; i < n; ++i)
        arr1[i] = arr2[i];

    std::cout << "\nReverse array is:\n";

    for (i = 0; i < n; ++i)
        std::cout << arr1[i] << " ";
    std::cout << std::endl;

    return 0;
}