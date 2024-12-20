#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int start = 5;
    int *ptr = &start;
    cout << ptr << endl;
    int *newPtr = ptr;
    cout << newPtr << endl;

    return 0;
}
