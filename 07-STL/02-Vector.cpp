#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr; // Time Complexity: O(1)

    vector<int> a(5, 1); // Time Complexity: O(n), where n = 5 (initialization of all elements)

    for (int i : a)
    {
        cout << i << " "; // Time Complexity: O(n), where n = arr.size() (printing each element)
    }

    cout << endl;

    cout << "Capacity -> " << arr.capacity() << endl; // Accessing capacity is O(1).

    arr.push_back(1); // Adds an element to the vector. Amortized Time Complexity: O(1) (due to occasional resizing)

    cout << "Capacity -> " << arr.capacity() << endl;

    arr.push_back(2);

    cout << "Capacity -> " << arr.capacity() << endl;

    arr.push_back(3);

    cout << "Size -> " << arr.size() << endl; // Accessing size is O(1).

    cout << "Element at 2nd index -> " << arr.at(2) << endl; // Accessing an element using `at()` is O(1).

    cout << "Empty or not -> " << arr.empty() << endl; // Checking if the vector is empty is O(1).

    cout << "Last element -> " << arr.back() << endl; // Accessing the last element is O(1).

    cout << "Front element -> " << arr.front() << endl; // Accessing the first element is O(1).

    // cout << "Erase element -> " << arr.erase(3) << endl;

    for (int i : arr)
    {
        cout << i << endl;
    }

    return 0;
}
