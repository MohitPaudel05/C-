#include<iostream>
using namespace std;
class Base{
    public :
    virtual void display(){
        cout<<"Hello from Base"<<endl;
    }
};
class Derived: public Base{
    public:
    void display() override{
        cout<<"Hello from deriveed"<<endl;
    }

};
class Child:public Base{
    public:
    void display() override{
        cout<<"Hello from Child"<<endl;
    }
};

int main(){
    Derived d;
    d.display();
    Child c;
    c.display();

};
