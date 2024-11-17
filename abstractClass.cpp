#include<iostream>
using namespace std;
class Base{
    protected:
    int i;
    Base(int i){
        this->i=i;
    }
    Base(){

        cout<<"Running Constructor (BASE)"<<endl;
    }
    public:
    virtual void func()=0;
    void display(){
        cout<<"(Base) Class...........";
    }
    ~ Base(){
        cout<<"Running Base Destructor (BASE)";
    }
};
class Derived:public Base{
    public:
    int j;
    Derived(){
cout<<"Running Derived Constructor"<<endl;
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
    ~ Derived(){
        cout<<"Running Derived Destructor"<<endl;
    }

};
int main() {
    // Derived d(4,3);
    // d.print(); 
    // Derived *der;
    // der->print();
    Base *ptr=new Derived;
    // Derived d;
    // ptr=&d;
    ptr->display();
    // d.func();
    ptr->func();

    
    return 0;
}