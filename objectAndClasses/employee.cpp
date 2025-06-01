#include <iostream>
using namespace std;
// creating a class name person
class Employee
{
private:
    int id;
    string name;
    float salary;

public:
    void getInfo()
    {
        
        cout<<"Enter your ID: "<< endl;
        cin>>this->id;
        cout<<"Enter your Name"<< endl;
        cin>>this->name ;
        cout<<"Enter your Salary"<< endl;
        cin>> this->salary;
    }
    
    
    void displayAll()
    {
        cout << "Name: " <<this->name << endl;
        cout << "ID: " << this->id << endl;
        cout << "Salary: " << this->salary << endl;
    }
};

int main()
{
    // creating the objects
    Employee emp[5];
    //getting the employee info
    for (int i=0;i<=3;i++){
        cout<<"Enter the data of for  employee: "<<i+1<<endl;
        emp[i].getInfo();

    };
    cout<<"......................................"<<endl;
    for(int i=0;i<=3;i++){
        emp[i].displayAll();
    };

   

    return 0;
}