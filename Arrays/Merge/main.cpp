#include <iostream>

void merged_arr(int[], int, int[], int, int[]);

int main(int argc, char const *argv[])
{
    int m, n, i, arr1[100], arr2[100], merged[200];

    std::cout << "Enter number of elements in first array\n: ";
    std::cin >> m;

    std::cout << "Enter the elements in first array\n: ";
    for(i = 0; i < m; ++i)
        std::cin >> arr1[i];

    std::cout << "Enter number of elements in second array\n: ";
    std::cin >> n;

    std::cout << "Enter the elements in second array\n: ";
    for(i = 0; i < n; ++i)
        std::cin >> arr2[i];

    merged_arr(arr1, m, arr2, n, merged);

    std::cout << "Merged Array is:\n";
    for (i = 0; i < m + n; ++i)
        std::cout << merged[i] << " ";
    std::cout << std::endl;

    return 0;
}

void merged_arr(int arr1[], int m , int arr2[], int n, int merged[])
{
    int i, j, k;
    j = k = 0;

    for (i = 0; i < m + n;)
    {
        if (j < m && k < n)
        {
            // if element of a array is less than b then push it in resultant array else push element of b in array.
            if (arr1[j] < arr2[k])
            {
                merged[i] = arr1[j];
                j++;
            } else
            {
                merged[i] = arr2[k];
                k++;
            }
            i++;
        } else if (j == m)
        {
            // if array a is finished push all the elements of b in resultant array
            for (; i < m + n;)
            {
                merged[i] = arr2[k];
                k++;
                i++;
            }
        } else
        {
            for (; i < m + n;)
            {
                merged[i] = arr1[j];
                j++;
                i++;
            }
        }
    }
}