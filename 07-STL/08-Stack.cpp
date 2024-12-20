#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s1;

    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    int top = s1.top();
    cout << top << endl;

    s1.pop();
    cout << s1.top() << endl;

    cout << s1.empty() << endl;
    return 0;
}