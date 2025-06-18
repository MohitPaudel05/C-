#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    Number(int n = 0)
    {
        this->num = n;
    }
    Number operator+()
    {
        return Number(num);
    }
    Number operator-()
    {
        return Number(-num);
    }

    friend int add(Number n1, Number n2);

    void display()
    {
        cout << "Number: " << num << endl;
    }
};

int add(Number n1, Number n2)
{
    return n1.num + n2.num;
}

int main()
{
    Number num1(5);
    Number num2(10);

    Number num3 = +num1;
    Number num4 = -num1;

    cout << "Original numbers:\n";
    num1.display();
    num2.display();

    cout << "\nAfter unary +: ";
    num3.display();

    cout << "After unary -: ";
    num4.display();

    cout << "\nSum of num1 and num2: " << add(num1, num2) << endl;

    return 0;
}
