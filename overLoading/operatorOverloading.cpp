#include <iostream>
using namespace std;

class Complex{
    private:
    int real;
    int imaginary;
    public:
    Complex(int real =0, int imaginary=0){
        this->real = real;
        this->imaginary=imaginary;
    }
   Complex operator+(Complex c){
    Complex temp;
    temp.real=this->real+c.real;
    temp.imaginary= this->imaginary+c.imaginary;
    return temp;




   }
   void print(){
    cout<<to_string(real)+ "+" + to_string(imaginary) +"i";
   } 

};


int main(){
    Complex c1(2,3);
    Complex c2(2,3);
    Complex c3= c1+ c2;
    c3.print();
    
    return 0;
}