#include <iostream> // preprocessor directives
#include <string>
using namespace std;

// Normal function
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

// Default parameter function
void greet(string msg = "User")
{
    cout << "hello" <<" "<< msg<<endl;
}

// Const parameter function
void display(const int num) {  // num is read-only
    cout << "Number: " << num << endl;
    // num += 10; // Can't performe this operation
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool result = isPrime(n);

    if (result == 1)
        cout << n << " is Prime number \n";
    else
        cout << n << " is Not Prime number \n";

    greet();
    display(10);
    return 0;
}