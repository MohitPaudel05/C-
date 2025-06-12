#include<iostream>
using namespace std;
//abstract class
class Connection{
    virtual void connect()=0;
    virtual void query()=0;
    virtual void disconnect()=0;

    void implementedMethod(){

    }

};
class OracleConnection:Connection{
    public:
    void connect(){
        cout<<"Oracle Connect"<<endl;
    }
    void query(){
        cout<<"Oracle Query"<<endl;
    }
    void disconnect(){
        cout<<"Oracle Disconnect"<<endl;
    }
};

int main(){
    OracleConnection oc;
    oc.connect();
    oc.query();
    oc.disconnect();
}