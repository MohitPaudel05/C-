#include<iostream>
using namespace std;

class Base1{
    public:
    Base1(){
        cout<<"Base 1 called"<<endl;
    }
    void print(){
        cout<<"base 1 function called"<<endl;
    }
};
class Base2{
    public:
    Base2(){
        cout<<"Base 2 called"<<endl;
    }
    void print(){
        cout<<"base2 function called"<<endl;
    }
    void collide(){
        cout<<"Base 2 collided"<<endl;
    }
};
class Base3{
    public:
    Base3(){
        cout<<"Base 3 called"<<endl;
    }
    void print(){
        cout<<"Base3 function called"<<endl;
    }
    void collide(){
        cout<<"Base 3 collide "<<endl;
    }
};

class child: public Base2, public Base1, public Base3{
    public:
    void display(){
        Base1::print();
        Base2::collide();
        Base3::collide();
    }


};
int main(){
    child c;
    Base1 b;
    c.display();

    b.print();
}