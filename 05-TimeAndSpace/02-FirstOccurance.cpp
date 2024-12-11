#include <iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int target = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            target = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return target;
}

int lastOccurance(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int target = -1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            target = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return target;
}

int main()
{
    int arr[8] = {1, 1, 2, 3, 3, 3, 3, 4};
    int result = firstOccurance(arr, 8, 3);
    int result1 = lastOccurance(arr, 8, 3);
    cout << "First Occurence: " << result << endl;
    cout << "Last Occurence: " << result1 << endl;
    return 0;
}