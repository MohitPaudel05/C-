#include<iostream>
using namespace std;
class Parent{
    public:
        Parent(){
        cout<<" Parent Default Constructor Called!"<<endl;
    }
        Parent(int x , string y){
        cout<<"Constructor with two argument called"<<endl;
    }
        Parent (int x , int y , int z){
        cout<<"Parent Constructor with three argument"<<endl;
    }


    
};
class Child:public Parent{
    public:
    Child(): Child(1,"hello"){
        cout<<"Child with two Constructor Called"<<endl;


    }
    Child(int x, string y):Parent (1,2,3){
        cout<<"child constructor with two agrument called"<<endl;
    }
    Child(int x , int y, int z){
        cout<<"xyz"<<endl;
    }
    

};

int main(){
    Parent p;
    Parent p1(10,"h");

    // Child c;
    // Parent p2(1,2,4);
    // Child c1(1,2,3);
    return 0;
}