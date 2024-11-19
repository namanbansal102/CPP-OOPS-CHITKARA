#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Constructor Called (BASE)"<<endl;
    }
    ~Base(){
        cout<<"Desctructor Called (BASE)"<<endl;
    }
    void baseFunction(){
        cout<<"Base Function Called"<<endl;
    }
};
class Derived:public Base{
    public:
    Derived(){
        cout<<"Constructor Called (Derived)"<<endl;
    }
    ~Derived(){
        cout<<"Desctructor Called (Derived)"<<endl;
    }
    void derivedFunction(){
        cout<<"Derived Function Called"<<endl;
    }
};
int main() {
    Derived d;
    Base *b=(Base*)(&d);
    // b->baseFunction();
    // by using static_cast operator we can upcast or downcasting the things
    Base *b1=static_cast<Base*>(&d);
    // up casting using static operator
    b1->baseFunction();

    return 0;
}