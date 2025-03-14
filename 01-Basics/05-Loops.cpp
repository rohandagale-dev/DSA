#include <iostream> // preprocessor directives
#include <vector>
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
    cout << "\n---------Do while loop: -----------\n";
    int count = 0;
    do
    {
        cout << count;
        count++;
    } while (count < 10);
    cout << endl;

    // While loop
    cout << "\n--------------While loop: -----------------\n";
    int cnt = 0;
    while (cnt < 10)
    {
        cout << cnt;
        cnt++;
    }
    cout << endl;
    // for loop
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << "\n----------auto loop---------\n";
    for (auto ele : arr)
    {
        cout << ele << endl;
    }

    return 0;
}