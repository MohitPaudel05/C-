#include<iostream>
using namespace std;
class student
{
private:
int a;
string name;
float x;


public:
student(){
    cout<<"student default constructor caled"<<endl;
}
student(int x, string y){
    cout<<"this is constructor with two arguements"<<endl;
}
student (int x, int y, int z){
    cout<<"parent contructor with three arguement"<<endl;
}

};










int main()
{
student abc;
student lala(1,2,3);
student a(1,"name");
}