#include<iostream>
using namespace std;
class parent {
    private :
    int privatedVariable;
    public:
    int publicVariable;
    protected:
    int protectedVariable;

    public:
    void display(){
        cout<<"Private Variable "<<privatedVariable<<endl;
        cout<<"Public Variable "<<publicVariable<<endl;
        cout<<"Protected Variable "<<protectedVariable<<endl;

    }

};

class child:public parent{


};

class child2: protected parent{

    void childDisplay(){
        display();
    }


};





int main(){
    child c2;
    c2.display();

    return 0;
}