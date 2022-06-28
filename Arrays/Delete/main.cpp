#include <iostream>

int main(int argc, char const *argv[])
{
    int i, n, arr[100], position;

    std::cout << "Enter number of elements in array: ";
    std::cin >> n;

    std::cout <<"\nEnter the elements in array\n: ";
    for (i = 0; i < n; ++i)
        std::cin >> arr[i];

    std::cout << "Enter the position of element which you want to remove\n: ";
    std::cin >> position;

    if (position >= n+1)
    {
        std::cout << "Deletion not possible.\n";
    } else
    {
        for (i = position - 1; i < n - 1; ++i)
            arr[i] = arr[i+1];
    }

    std::cout << "Resultant array is: \n";
    for (i = 0; i < n-1; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}