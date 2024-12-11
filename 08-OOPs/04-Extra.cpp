#include <iostream>
#include <string>
using namespace std;

// static keyword
void func()
{
    static int x = 0;
    cout << "x : " << x << endl;
    x++;
}

int main()
{
    func();
    func();
    func();
    return 0;
}