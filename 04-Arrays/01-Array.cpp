#include <iostream>
using namespace std;

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
    // dynamic array
    int *arr1 = new int[5];

    // static array
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Starting address of array" << arr << endl;
    cout << arr[1] << endl;
    cout << *(arr + 1) << endl; // dereferencing

    print(arr, 5);
    delete arr1;
    return 0;
}