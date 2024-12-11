#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s;
    // Time Complexity: O(1)

    // Time Complexity: O(1)
    s.push("rohan");
    s.push("harsh");
    s.push("andy");

    cout << "Element at top: " << s.top() << endl; // Time Complexity: O(1)

    s.pop(); // Time Complexity: O(1)

    cout << "Element at top: " << s.top() << endl;

    cout << "Size of stack: " << s.size() << endl; // Time Complexity: O(1)

    cout << "is stack empty: " << s.empty() << endl; // Time Complexity: O(1)

    return 0;
}
