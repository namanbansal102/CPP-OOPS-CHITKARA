#include<iostream>
using namespace std;
class Base{
    public:
    virtual void  func()=0;
    Base(){
        cout<<"Running Constructor (Base)"<<endl;
    }
    virtual ~Base(){

        cout<<"Running Destructor (Base)"<<endl;
    }
};
class Derived:public Base{
    public:
    Derived(){
        cout<<"Running Constructor (Derived)"<<endl;
    }
    ~Derived(){
        cout<<"Running Destructor (Derived)"<<endl;
    }
    void func(){
        cout<<"Running Func"<<endl;
    }
};
int main() {
    // Derived d;
    Base *d=new Derived;
    // delete d;
    // Base *b;

    return 0;
}