#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    // find mid
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    // if mid is the key
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return arr[mid];
        }

        // go to left
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int result = binarySearch(arr, 8, 6);
    cout << result << endl;
    return 0;
}

// Time complexity = O(log N)
// Space complexity = O(1)