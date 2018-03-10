#include <iostream>

const int size = 16;

int main(int argc, char const *argv[])
{
    int m, n;
    int arr[size][size];

    std::cout << "Enter the nu,ber of rows and columns\n: ";

    std::cin >> m >> n;

    std::cout << "Enter the Elements in Table: " << std::endl;

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cin >> arr[i][j];
        }
    }

    // output each array element's value

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            std::cout << "arr[" << i << "]" << "[" << j << "] " << arr[i][j] << std::endl;
        }
    }
    return 0;
}