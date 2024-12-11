#include <iostream> // preprocessor directives
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    bool result = isPrime(n);

    if (result == 1)
        cout << n << " is Prime number";
    else
        cout << n << " is Not Prime number";
    return 0;
}