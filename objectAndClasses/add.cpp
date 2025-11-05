#include<iostream>
using namespace std;

template <typename T>
class Pranisha{
    T Property;
    public:
    Pranisha(T Property){
        this->Property = Property;
    }
    void Display(){
        cout<<"Result  =>"<<Property<<endl;
    }
};



int  main(){
    Pranisha<string> p("Pranisha");
    p.Display();
    Pranisha<string> p2("Pranisha Noob");
    p2.Display();
    Pranisha <int> p1(16);
    p1.Display();

    
    return 0;
}