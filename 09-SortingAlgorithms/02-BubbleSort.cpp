#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[8] = {4, 6, 3, 9, 5, 2, 1, 7};
    bubbleSort(arr, 8);
    print(arr, 8);
    return 0;
}

// time complexity = O(n^2)
// spacec complexity = O(n)