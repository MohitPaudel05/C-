#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    string address;
    Person(string name, int age, string address)
    {
        this->name = name;
        this->age = age;
        this->address = address;
    }
};
class Student : public Person
{
public:
    int roll_no;
    Student(string name, int age, string address, int roll_no) : Person(name, age, address)
    {
        this->roll_no = roll_no;
    };
   
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};
int main(){
    Student s1("Mohit",20,"btl",10);
    s1.display();
    cout<<"------------------------------>"<<endl;
    string name, address;
    int age, roll_no;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter address: ";
    cin >> address;
    cout << "Enter roll number: ";
    cin >> roll_no;

    Student s(name, age, address, roll_no);
    s.display();

    return 0;
}

