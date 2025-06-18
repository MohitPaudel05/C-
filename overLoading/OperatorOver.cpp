#include<iostream>
using namespace std;
class Student{
    private :
    string name;
    int roll_no;
    public:
    Student(string name, int roll_no){ 
        this->name = name;
        this->roll_no= roll_no;
    }

    
    bool operator==(Student other){
        if (this->roll_no == other.roll_no){
            return true;
        }
        else{
            return false;
        }
    }
    

};

int main(){
    Student s1("Alice",101);
    Student s2("Bob",101);

   
    return 0;
};