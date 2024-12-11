#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[10] = {2, 6, 7, 8, 3, 5, 0, 3, 5, 12};

    int key;
    cout << "Enter a key to search: ";
    cin >> key;

    bool ans = linearSearch(arr, 10, key);

    if (ans == true)
        cout << "The key is found" << endl;
    else
        cout << "The key is not found" << endl;

    int max = INT8_MIN;
    cout << max << endl;

    return 0;
}