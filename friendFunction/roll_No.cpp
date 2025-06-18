#include <iostream>
using namespace std;
class Student
{
private:
    int roll;
    string name;

public:
    Student(int r, string n)
    {
        this->roll = r;
        this->name = n;
    }
    void display()
    {
        cout << "name: " << name << "\troll_no:  " << roll<<endl;
    }

    Student operator-()
    {
        return Student(-roll, name);
    }
    friend void changeDetails(Student &s, int newRoll, string newName);
};
void changeDetails(Student &s, int newRoll, string newName)
{
    cout<<"\n new details are : "<<endl;
    s.name = newName;
    s.roll = newRoll;
}

int main()
{
    Student s1(101,"Mohit");
    Student s2(102,"Ram");
    
    cout<<"Original Details==>"<<endl;
    s1.display();
    s2.display();
    changeDetails(s2,201,"izzu");
    s2.display();

    Student s3= -s2;
    s3.display();

    return 0;
}