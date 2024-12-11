#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q; // Time Complexity: O(1)

    // Time Complexity: O(1)
    q.push("rohan");
    q.push("harsh");
    q.push("andy");

    cout << "First element: " << q.front() << endl; // Time Complexity: O(1)

    q.pop(); // Time Complexity: O(1)

    cout << "First element: " << q.front() << endl;

    cout << "Size after pop: " << q.size() << endl; // Time Complexity: O(1)

    return 0;
}
