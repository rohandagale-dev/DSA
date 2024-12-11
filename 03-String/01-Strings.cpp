#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str[] = "rohan";
    cout << str << endl;

    string str1 = "rohan";
    cout << str1 << endl;

    str1.push_back('d');
    str1.pop_back();
    str1.append("dagale");
    cout << "Charater at index: " << str1.at(2) << endl;
    cout << "Check is empty string: " << str1.empty() << endl;
    cout << "Charater at staring index: " << str1.front() << endl;
    cout << "Charater at ending index: " << str1.back() << endl;
    cout << "Length of string: " << str1.length() << endl;

    return 0;
}