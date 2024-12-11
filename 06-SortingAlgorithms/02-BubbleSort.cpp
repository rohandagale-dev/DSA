#include <iostream>
using namespace std;

void bubbleSort(int *arr, int size)
{
    bool swapped = false;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            // already sorted
            break;
        }
    }
}

void print(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[6] = {10, 1, 7, 6, 14, 9};
    bubbleSort(arr, 5);
    print(arr, 5);
    return 0;
}
