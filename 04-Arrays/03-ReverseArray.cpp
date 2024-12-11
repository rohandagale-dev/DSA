#include <iostream>
using namespace std;

void reverseArray(int arr[], int len)
{
    int start = 0;
    int end = len - 1;
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void print(int arr[], int size)
{
    cout << arr << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{

    int arr[8] = {4, 6, 3, 2, 7, 8, 6, 9};
    int arr1[7] = {4, 6, 3, 2, 7, 8, 9};

    reverseArray(arr, 8);
    print(arr, 8);

    reverseArray(arr1, 7);
    print(arr1, 7);
    return 0;
}