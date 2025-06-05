#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Defualt Constructor of Base Called" << endl;
    }
    Base(int x){
        cout<<"Paramaterized Constructor called"<<endl;
    }
    Base (int x , int y){
        cout<<"with two agrument called"<<endl;
    }
    Base(int x, int y , int z){
        cout<<"Base with three argument Constructor Called"<<endl;
    }
};
class Derived : public Base {
public:
    Derived() : Derived(10,11) {
        cout << "Default Constructor of Derived called" << endl;
    }
    Derived(int a, int b1): Derived(1){
        cout<<"two argument"<<endl;
    }
    Derived(int g){
        cout<<"one argument"<<endl;
    }
    Derived(int x, int y, int z): Base(x,y,z){
        cout<<"derived Constructor with three argument called"<<endl;
    }
};


       
    


int main()
{
    Derived d;
    // Base b(1,2,3);
    // Derived d1(1,2,3);
    return 0;
}

// Parent child 3 constructor 
// comibination of consturctor can be called 
// default - double- tri possible combination