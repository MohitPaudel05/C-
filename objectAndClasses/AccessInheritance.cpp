#include<iostream>
using namespace std;
class A {
    private:
    int privateDataA;
    protected:
    int protectedDataB;
    public:
    int publicDataC;
};

class B : public A //publicly derived
{
    public:
    void display(){
        int a;
        // a= privateDaataA; not accessible..
        a=protectedDataB;
        a= publicDataC;

    }
    

};
class C: protected A //protected derived
{
    public:
    
    void display(){
        int a;
        // a= privateDaataA; not accessible..
        a=protectedDataB;
        a= publicDataC;

    }

};
class D: private A{
    public:
    void display(){
        int a;
        // a= privateDaataA; not accessible..
        a=protectedDataB;
        a= publicDataC;

    }

};
