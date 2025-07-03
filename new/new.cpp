#include<iostream>
using namespace std;

class Person{
    private:
    string name;
    int age;
    public:
    Person(string name,int age){
        this->name = name;
        this->age = age;
    }
    void display(){
        cout<<"My name is :"<<name<<endl;
        cout<<"Age => "<<age<<endl;
    }
};



int main(){
    Person *s = new Person("Mohit ",20);
    s->display();
    delete s;
    return 0;
}