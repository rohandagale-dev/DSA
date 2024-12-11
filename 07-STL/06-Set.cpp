#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s; // Time Complexity: O(1)

    // Time Complexity: O(log n)
    s.insert(5);
    s.insert(5);
    s.insert(5);
    // Time Complexity: O(log n) per operation
    s.insert(1);
    s.insert(6);
    s.insert(0);

    for (auto i : s)
    {
        cout << i << endl; // Time Complexity: O(n), where n is the size of the set.
    }

    cout << "------------------" << endl;

    set<int>::iterator it = s.begin();

    s.erase(it); // Time Complexity: O(log n)

    for (auto i : s)
    {
        cout << i << endl; // Time Complexity: O(n)
    }

    cout << "If element is present: " << s.count(5) << endl; // Time Complexity: O(log n)

    set<int>::iterator itr = s.find(5); // Time Complexity: O(log n)

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << endl; // Time Complexity: O(k), where k is the number of elements from `itr` to the end.
    }

    cout << endl;
    return 0;
}
