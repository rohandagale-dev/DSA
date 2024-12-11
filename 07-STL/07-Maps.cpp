#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m; // Time Complexity: O(1)

    // Time Complexity: O(log n)
    m[1] = "rohan";
    m[2] = "harsh";
    m[3] = "baker";
    m.insert({5, "bheem"});

    for (auto i : m)
    {
        cout << i.first << ": " << i.second << endl; // Time Complexity: O(n), where n is the size of the map.
    }
    cout << endl;

    cout << "Finding element: " << m.count(5) << endl; // Time Complexity: O(log n)

    m.erase(5); // Time Complexity: O(log n)

    for (auto i : m)
    {
        cout << i.first << ": " << i.second << endl; // Time Complexity: O(n)
    }

    cout << endl;
    return 0;
}
