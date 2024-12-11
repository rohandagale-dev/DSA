#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // max heap
    priority_queue<int> maxi; // Time Complexity: O(1)

    // min heap
    priority_queue<int, vector<int>, greater<int>> mini; // Time Complexity: O(1)

    // Time Complexity: O(log n)
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "Size of P-queue: " << maxi.size() << endl; // Time Complexity: O(1)

    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " "; // Time Complexity: O(1)

        maxi.pop(); // Time Complexity: O(log n)
    }
    cout << endl;

    // Time Complexity: O(log n)
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    cout << "Size of P-queue: " << mini.size() << endl; // Time Complexity: O(1)

    int n1 = mini.size();
    for (int i = 0; i < n1; i++)
    {
        cout << mini.top() << " "; // Time Complexity: O(1)

        mini.pop(); // Time Complexity: O(log n)
    }
    cout << endl;

    cout << "Empty:" << mini.empty() << endl; // Time Complexity: O(1)

    return 0;
}
