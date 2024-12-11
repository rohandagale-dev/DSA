#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;

    Student()
    {
        cout << "Non-parameterized\n";
    }
    Student(string name)
    {
        this->name = name;
    }
};

// compile time polymorphism
class Print
{
public:
    void show(int x)
    {
        cout << "int : " << x << endl;
    }
    void show(char ch)
    {
        cout << "int : " << ch << endl;
    }
};

// run time polymorphism
class Parent
{
public:
    void getInfo()
    {
        cout << "parent class\n";
    }

    // virtual function
    virtual void hello()
    {
        cout << "hello from parent\n";
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "child class\n";
    }

    void hello()
    {
        cout << "hello from child\n";
    }
};

int main()
{
    Student s1;
    s1.name = "rohan";

    Print p1;
    p1.show(3);
    p1.show('A');

    Child c1;
    c1.getInfo();
    c1.hello();
    return 0;
}