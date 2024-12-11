#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str)
{
    int start = 0;
    int end = str.length() - 1;
    while (start <= end)
    {
        int temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    string str = "rohan";
    cout << str << endl;

    reverseString(str);
    cout << str << endl;
}