#include <iostream>
#include <string>
using namespace std;

// Encapsulations means wrapping up  properties and methos in a single unit called class
// it helps in data hidding

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string sub;
    int age;

    void getInfo()
    {
        cout << name << endl;
        cout << dept << endl;
        cout << age << endl;
        cout << sub << endl;
    }
};

int main()
{
    Teacher t1;
    t1.name = "Swati";
    t1.age = 38;
    t1.dept = "CS";
    t1.sub = "CNS";
    t1.getInfo();
    return 0;
}