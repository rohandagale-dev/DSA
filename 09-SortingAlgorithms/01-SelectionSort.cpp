#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minValue = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minValue])
            {
                minValue = j;
            }
        }
        swap(arr[i], arr[minValue]);
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[8] = {4, 6, 3, 9, 5, 2, 1, 10};
    selectionSort(arr, 8);
    print(arr, 8);
    return 0;
}

// time complexity = O(n^2)
// spacec complexity = O(1) in-place sorting algorithm