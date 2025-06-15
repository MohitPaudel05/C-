#include <iostream>
using namespace std;

class Sum
{
public:
   virtual int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }

    double add(double a, double b)
    {
        return a + b;
    }
    void show()
    {
        cout << "method Overloading";
    }
    int show(int x)
    {
        return x;
    }
};
class ChildSum : public Sum
{
public:
    int add(int a, int b) override
    {
        return (a + b - b);
    }
};

int main()
{
    Sum s;
    ChildSum cs;

    cout << "Sum of 2 and 3: " << s.add(2, 3) << endl;
    cout << "Sum of 1, 2 and 3: " << s.add(1, 2, 3) << endl;
    cout << "Sum of 2.5 and 3.7: " << s.add(2.5, 3.7) << endl;

    s.show();
    cout << endl;
    cout << "The message is => " << s.show(5)<<endl;
    cout <<"child class override "<<cs.add(2,2);

    return 0;
}