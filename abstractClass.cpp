#include<iostream>
using namespace std;
class Base{
    protected:
    int i;
    Base(int i){
        this->i=i;
    }
    Base(){

    }
    public:
    virtual void func()=0;
    void display(){
        cout<<"(Base) Class";
    }
};
class Derived:public Base{
    public:
    int j;
    Derived(){

    }
    Derived(int x,int y):Base(x){
        this->j=y;
    }
    void input(){
        cout<<"Input";
    }
    void func(){
        cout<<"Running Derived Class (Derived)";
    }
    void print(){
        cout<<i<<" "<<j;
    }
};
int main() {
    // Derived d(4,3);
    // d.print(); 
    // Derived *der;
    // der->print();
    Base *ptr;
    Derived d;
    ptr=&d;
    ptr->func();

    
    return 0;
}