#include <iostream>
// #include<string>
using namespace std;

class Student{
    public:
    int age;
    string name;
    
    static string collegeName;


    void display(){
        cout<<"Name is "<<name<<endl;
        cout<<"Age is "<<age<<endl;
        cout<<"College Nameis "<<collegeName<<endl;
    }
};
string Student::collegeName ="Radiant";

int main(){
    Student s1,s2,s3;

    s1.age=14;
    s1.name="Ram";
    s1.display();


    s2.age=18;
    s2.name="raju";
    s2.collegeName="RadiantPro";
    s2.display();
    s3.age=144;
    s3.name="DeadZone";
    s3.display();
    
}