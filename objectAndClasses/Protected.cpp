#include <iostream>
using  namespace std;
class Base{
    /**
     * only accessible from class
     *
     */
private:
    int privateVariable;
public:
    int publicVariable;
protected:
    int protectedVariable;


public:
    int getProtectedVariable()
    {
        return protectedVariable;
    }

};
class Derived: public Base {
public:
    void setProtectedVariable(int x)
    {
        protectedVariable =x;
    }
//public:
//    int getProtectedVariable()
//    {
//        return protectedVariable;
//    }


};

int main()
{
    Derived d;
    d.setProtectedVariable(10);
    cout<<"Protected Variable"<<d.getProtectedVariable();

}