#include <iostream>
using namespace std;
 void pattern (int n){
    for (int i =0; i<n; i++){
        char ch='A';
        for (int j =0;j<n;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
 }
int main(){
   pattern(4);
    int n= 4;
    cout<<endl;

    for (int i =0; i<n; i++){
        for (int j =0;j<n;j++){
            cout<<j;
        }
        cout<<endl;
    }
}