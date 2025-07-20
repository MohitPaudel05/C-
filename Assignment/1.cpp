/* Write a C++ program that takes two integers as input and divides the first by the second.
Implement error handling to catch division by zero and display an appropriate error message.
The program should not terminate unexpectedly if the user enters zero as the divisor.*/

#include <iostream>
#include <stdexcept> // for runtime  exception handling 
using namespace std;


class Division 
{
public:
    float num, deno;   
    void getInput()   //function to get input from user
    {

        cout << "Enter  first the numerator" << endl;
        cin >> num;
        cout << "Enter the denominator" << endl;
        cin >> deno;
    }

    void DisplayOutput()  // method to perform output and handle error
    {
        try
        {
            if (deno == 0)  // checking  if the denominatior is zero
            {
                throw runtime_error("Denominator cannot be zero"); 
            }
            double result =(num / deno);
            cout << "Result => " << result << endl;
        }
        catch (const runtime_error& e){   //Catch block to handle runtime error
            cout<<e.what()<<endl;      //display the error message
        }

    }
};

int main()
{

    Division d;  // created d as object division class
    d.getInput();
    d.DisplayOutput();
    return 0;
}
