#include<iostream>

using namespace std;

class Base{
    public:
    void display(){
        cout<<"Base without virtual called"<<endl;
    }
};

class Derived : public Base{
    public:
    void display(){
        cout<<"Derived without virtual called"<<endl;
    }
};
class Base1 {
    public :
    virtual void display(){
        cout<<"Base 1 with virtual code run"<<endl;
    }
};
class Derived1: public Base1{
    public:
    void display() override{
        cout<<"Derived 1 with override  called"<<endl;
    }
};


int main(){
    Base b;
    Derived d;
    Derived1 d1;
    // d.display();

    Base tmepb = d;
    tmepb.display();

    Base1* xyz = new Derived1();
    xyz->display();

    //with virtual
    Base1 xy = d1;
    cout<<"base1"<<endl;
    xy.display();


    Base1& x = d1;
    x.display();

    
    





    return 0;
}