#include <iostream>
using namespace std;
class Number{
  private:
  int num;
  public:
  Number(int n){
    this->num =n;
    
  }
  friend int add(Number n1, Number n2); //friend Function
    
  
};
int add(Number n1 , Number n2){
    return n1.num + n2.num;
}


int main(){
    Number num1(5);    
    Number num2(10);
    cout<<add(num1,num2);

    return 0;
}