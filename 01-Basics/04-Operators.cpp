#include <iostream> // preprocessor directives
using namespace std;

int main()
{
    // Arithmetic operators
    int a = 3;
    int b = 5;

    cout << "Add: " << a + b << endl;
    cout << "Sub: " << a - b << endl;
    cout << "Multi: " << a * b << endl;
    cout << "Div: " << a / b << endl;
    cout << "Mod: " << (a % b) << endl;
    cout << "Post increament: " << a++ << endl;
    cout << "Pre increament: " << ++a << endl;
    cout << "Post decrement: " << a-- << endl;
    cout << "Pre decremnt" << --a << endl;

    // Logical operators
    int c = 4;
    int d = 5;
    bool bl = true;

    if (c >= 4 && b > 5)
        cout << "Both values must be greater" << endl;
    else
        cout << "One value is not greater" << endl;

    if (c >= 4 || b > 5)
        cout << "Atleast one is greater" << endl;
    else
        cout << "Both the value are not greater" << endl;

    if (!bl)
        cout << "the value is true" << endl;
    else
        cout << "the value is false" << endl;

    // Bitwise operatos
    int e = 3;               // 0011
    int f = 5;               // 0101
    cout << (e & f) << endl; // 0001
    cout << (e | f) << endl; // 0111
    cout << (e ^ f) << endl; // 0110
    return 0;
}