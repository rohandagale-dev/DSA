#include <iostream>
using namespace std;

int main()
{
    // simple pyramid
    cout << "simple pyramid: " << endl;
    for (int i = 0; i < 5; i++) // row
    {
        for (int j = 0; j < i + 1; j++) // col
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // flipped simple pyramid
    cout << "flipped simple pyramid: " << endl;
    for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j <= 5; j++)
        {
            if (j >= i)
                cout << " *";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // inverted pyramid
    cout << "inverted pyramid: " << endl;
    for (int i = 5; i > 0; i--)
    {
        for (int j = 0; j <= 5; j++)
        {
            if (j >= i)
                cout << " ";
            else
                cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    // inverted flipped pyramid
    cout << "inverted pyramid: " << endl;
    for (int i = 5; i > 0; i--)
    {
        for (int j = 5; j > 0; j--)
        {
            if (j <= i)
                cout << " *";
            else
                cout << "  ";
        }
        cout << endl;
    }

    // triangle
    int k = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= k)
                cout << "* ";
            else
                cout << " ";
        }
        k--;
        cout << "\n";
    }

    return 0;
}