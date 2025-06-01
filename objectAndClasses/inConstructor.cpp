#include <iostream>
using namespace std;

class student
{
private:
    int id;
    string name;
    int roll;

public:
    student(int id, string name, int roll)
    {
        this->id = id;
        this->name = name;
        this->roll = roll;
        cout << "constructor called!" << endl;
    };
    void displayInfo()
    {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;

        cout << "Roll Number: " << roll << endl;
    }
};
int main()
{
    student student1(112,"MOhit",10);
    student1.displayInfo();


    return 0;
}