#include <iostream> // preprocessor directives
using namespace std;

int main()
{
    int num = 5; // 4 bytes
    cout << "Size of Integer datatype is: " << sizeof(num) << " bytes" << endl;

    char ch = 'A'; // 1 byte
    cout << "Size of Character datatype is: " << sizeof(ch) << " byte" << endl;

    bool boolean = true; // 1 byte
    cout << "Size of Bool datatype is: " << sizeof(boolean) << " byte" << endl;

    float flt = 124.4567f; // 4 bytes
    cout << "Size of Float datatype is: " << sizeof(flt) << " bytes" << endl;

    double dbl = 1235.6344; // 8 bytes
    cout << "Size of Double datatype is: " << sizeof(dbl) << " bytes" << endl;

    short sh = 12; // 2 bytes
    cout << "Size of Short datatype is: " << sizeof(sh) << " bytes" << endl;

    unsigned int un = 123; // 4 bytes  Non-negative number

    int *ptr = &num;
    cout << "Size of pointer is: " << sizeof(ptr) << " bytes" << endl;

    return 0;
}