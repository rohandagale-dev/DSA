#include <iostream> // preprocessor directives
using namespace std;

int main()
{
    int n;
    cin >> n;

    switch (n)
    {
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "two" << endl;
    default:
        cout << "default behavious" << endl;
        break;
    }
    return 0;
}