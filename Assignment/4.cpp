
/*Write a function that may throw different types of exceptions (e.g., int, double, string).
In the main function, use a try-catch block with specific catch handlers and a catch-all handler.
In one of the catch blocks, re-throw the exception and handle it at a higher level.*/



#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class ExceptionType{
    public:
    void DifferentException(int input){
        if(input==1){
            throw 420;

        }
        if (input ==2){
            throw 420.29;
        }
        if(input ==3){
            throw string( "string error");
        }
        else{
            cout<<"No Exception Thrown"<<endl;
        }

    }
    
};
int main(){
    ExceptionType obj;

try{
   try {
        int input;
        cout<<"Enter the number "<<endl;
        cin>>input;
        obj.DifferentException(input);
    }
    catch (int e){
        cout<<"Int exception"<<e<<endl;
        throw;
    }
    catch (double e){
        cout<<"Double exception"<<e<<endl;
        throw;
    }
    catch (string& e){
            cout<<"String exception"<<e<<endl;
        throw;
    }
}
catch(...){
    cout<<"caught exception at a higher level"<<endl;
}
 
    
}
    
