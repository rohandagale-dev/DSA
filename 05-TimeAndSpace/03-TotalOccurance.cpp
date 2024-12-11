#include <iostream>
using namespace std;

int findFirstOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int firstOccurrence = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            firstOccurrence = mid;
            end = mid - 1; // Move to the left part
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return firstOccurrence;
}

int findLastOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int lastOccurrence = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            lastOccurrence = mid;
            start = mid + 1; // Move to the right part
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return lastOccurrence;
}

int totalOccurrences(int arr[], int size, int key)
{
    int firstOccurrence = findFirstOccurrence(arr, size, key);
    if (firstOccurrence == -1) // Key not found
    {
        return 0;
    }
    int lastOccurrence = findLastOccurrence(arr, size, key);
    return lastOccurrence - firstOccurrence + 1;
}

int main()
{
    int arr[8] = {1, 1, 2, 2, 3, 3, 3, 3};
    int result = totalOccurrences(arr, 8, 3);
    cout << "Total occurrences of 3: " << result << endl;
    return 0;
}
