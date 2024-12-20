#include <iostream>
using namespace std;
#define MAX 1000

class Stack
{
public:
    int top;
    int arr[MAX];

    Stack()
    {
        top = -1;
    }
    // Funtion to push in stack
    bool push(int data)
    {
        if (top > (MAX - 1))
        {
            cout << "Stack overflow" << endl;
            return false;
        }
        else
        {
            arr[++top] = data;
            return true;
        }
    }

    // Function to peek
    int peek()
    {
        if (top < 0)
        {
            std::cout << "Stack is Empty" << std::endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    // Function to pop in stack
    int pop()
    {
        if (top < 0)
        {
            cout << "stack is empty" << endl;
            return -1;
        }
        else
        {
            int x = arr[top--];
            return x;
        }
    }

    // Function to check is stack
    int empty()
    {
        if (top < 0)
            return 0;
    }
};

int main()
{
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);

    cout << s1.peek() << endl;

    s1.pop();

    cout << s1.peek() << endl;
    return 0;
}