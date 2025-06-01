#include <iostream>
using namespace std;
// creating a class name person
class Person
{
private:
    int age;
    string name;
    float salary;

public:
    void getInfo(int age, string name, float salary)
    {
        this->age = age;
        this->name = name;
        this->salary = salary;
    }
    int getAge()
    {
        return age;
    }
    string getName()
    {
        return name;
    }
    float getSalary()
    {
        return salary;
    }
    void displayAll()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    // creating the objects
    Person p;
    Person p1;
    p.getInfo(20, "rajesh", 101111);
    p.displayAll();
    p1.getInfo(21, "raj", 101);
    p1.displayAll();

    return 0;
}