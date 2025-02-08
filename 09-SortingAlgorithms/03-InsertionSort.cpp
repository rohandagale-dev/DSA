#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
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
    insertionSort(arr, 8);
    print(arr, 8);
    return 0;
}

// time complexity = O(n^2)
// spacec complexity = O(1)