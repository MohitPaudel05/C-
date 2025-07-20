/*Write a C++ program that reads an integer and a string from the user.
Throw an exception if the integer is negative or if the string is empty.
Use multiple catch blocks to handle each type of exception separately and display appropriate messages.*/

#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

class ExceptionChecker{
    private:
    int integer;
    string message;
    public:
    ExceptionChecker(){ // Constructor to get the input from the user;
        cout<<"Enter an integer : "<<endl;
        cin>>integer;
        cin.ignore();  // Clear newline before reading string

        cout<<"Enter the message : "<<endl;
        getline(cin,message);

    }
    void check(){  // function to check whether the integer is empty or message is empty 
        if(integer<0 || message.empty()){
            throw runtime_error("Error! You have entered either integer is negative or message is empty"); //throws an error if it satisfy the conditon
        }
        // if(message.empty()){
        //     throw invalid_argument(" your Message is empty ");
        // }
        
        
    }
    void Display(){ // display function 
        cout<<"You have entered: "<<integer << "  and "<<message<<endl; 
    }



};



int main(){
    try{
    ExceptionChecker ec;   // ec as object 
    

    ec.check();
    ec.Display();
    


    }
    catch (const exception& e){
        cout<<e.what();
    }
    // catch (const runtime_error& e){
    //       cout<<"Integer Problem :"<< e.what() << endl;
    // }
    // catch (const invalid_argument& e){
    //       cout<<"MEssage Problem: "<<e.what() << endl;
    // }
    


}

