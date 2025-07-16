#include<iostream>
#include <stdexcept> 

using namespace std;

class Rectangle{
    public:
    int width , height;
    Rectangle(int w, int h){
        width = w ;
        height = h;

        if (width ==0 || height ==0){
             throw invalid_argument("Please enter positive numbers for width and height.");
        }
        }
        void displayArea(){
            cout<<"The area of Rectangle is => "<<width*height<<endl;
        }
   
    
};
int main(){
    try{
         Rectangle a1(10,10);
         a1.displayArea();
    }
    catch (const exception& e)
   {
        cout<<"You have entered either width or height =0"<<e.what()<<endl;
    }
    
   
}
