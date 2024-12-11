#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    // properties / attributes
private:
    double salary;

public:
    string name;
    string dept;
    string sub;

    // non-parameterized - contructor overloading
    Teacher()
    {
        dept = "Cs";
        cout << "Contructor called" << endl;
    }

    // parameterized
    Teacher(string name, string dept, string sub, double sal)
    {
        this->name = name;
        this->dept = dept;
        this->sub = sub;
        this->salary = sal;
    }

    // copy consturctor
    Teacher(Teacher &obj)
    {
        this->name = obj.name;
        this->dept = obj.dept;
        this->sub = obj.sub;
        this->salary = obj.salary;
    }

    // methods / member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // getter
    double getSalary()
    {
        return salary;
    }
    // setter
    void setSalary(double newSalary)
    {
        salary = newSalary;
    }
};

class Student
{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *(cgpaPtr) = cgpa;
    }

    Student(Student &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *(obj.cgpaPtr);
    }

    void printInfo()
    {
        cout << this->name << endl;
        cout << *cgpaPtr << endl;
    }

    ~Student()
    {
        delete cgpaPtr;
    }
};
int main()
{
    Teacher t1;
    Teacher t2("Harsh", "Chem", "HE", 40000);
    Teacher t3(t2); // default copy constructor

    Student s1("Rohan", 9.56);
    Student s2(s1);

    // shallow copy problem 
    s1.printInfo();
    s2.printInfo();
    *(s1.cgpaPtr) = 6.95;
    s1.printInfo();
    s2.printInfo();

    t1.name = "rohan";
    t1.dept = "CS";
    t1.sub = "CNS";
    t1.setSalary(50500);

    cout << t1.dept << endl;
    cout << t1.getSalary() << endl;
    cout << t2.name << endl;
    cout << t3.name << endl;

    return 0;
}