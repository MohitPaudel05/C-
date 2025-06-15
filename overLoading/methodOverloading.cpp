// Method Overloading in C++ means defining multiple functions with the same name but with different parameters (number or type) in the same scope. The compiler decides which function to call based on the arguments passed.




#include <iostream>
using namespace std;

class Sum {
public:
    
    int add(int a, int b) {
        return a + b;
    }

    
    int add(int a, int b, int c) {
        return a + b + c;
    }

    
    double add(double a, double b) {
        return a + b;
    }
    void show(){
        cout<<"method Overloading";
    }
    int show(int x){
        return x;
    }
    
};

int main() {
    Sum s;

    cout << "Sum of 2 and 3: " << s.add(2, 3) << endl;
    cout << "Sum of 1, 2 and 3: " << s.add(1, 2, 3) << endl;
    cout << "Sum of 2.5 and 3.7: " << s.add(2.5, 3.7) << endl;
    
     s.show();
     cout<<endl;
    cout<< "The message is => "<< s.show(5);

    return 0;
}