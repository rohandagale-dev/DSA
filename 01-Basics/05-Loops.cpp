#include <iostream> // preprocessor directives
using namespace std;

int main()
{
    // traditional for loop
    cout << "For loop: ";
    for (int i = 0; i < 10; i++)
    {
        cout << i;
    }
    cout << endl;
    cout << endl;

    // do while loop
    cout << "Do while loop: ";
    int count = 0;
    do
    {
        cout << count;
        count++;
    } while (count < 10);
    cout << endl;
    cout << endl;

    // While loop
    cout << "While loop: ";
    int cnt = 0;
    while (cnt < 10)
    {
        cout << cnt;
        cnt++;
    }

    return 0;
}