#include <iostream>
#include <string>
using namespace std;

// Type of inheritance
// single, Mutiple, Multilevel, hybrid,  hierarchical
// Modes of inheritance - private, public, protected

class Person
{
public:
    string name;
    int age;

    // Parameterized constructor
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person
{
public:
    int rollno;

    // Constructor for Student, calling the base class constructor
    Student(string name, int age, int rollno) : Person(name, age) // no need to call contructor if there is no custom constructor
    {
        this->rollno = rollno;
    }

    // Method to display information
    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Rollno: " << rollno << endl;
    }
};

int main()
{
    // Creating an object of Student with parameters
    Student s1("Rohan", 22, 88135);
    s1.getInfo();

    return 0;
}
