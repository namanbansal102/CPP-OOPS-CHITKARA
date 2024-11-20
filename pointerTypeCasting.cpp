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
    virtual void print(){
        cout<<"Printing in Base Class"<<endl;
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
    void print(){
        cout<<"Printing in Derived Class"<<endl;
    }
    static void ll(){
        cout<<"LL function Running"<<endl;
    }
};
int main() {
    // to typecast a pointer
    // int i=10;
    // void *v=static_cast<void*>(&i);
    // string *ptr=static_cast<string*>(v);
    // cout<<ptr;
    // static cast is mainly used for upcasting like converting
    // from derived to base class this is called upcasting of my class
    // while dynamic cast is mainly used for downcasting my function and my members

    Base *b=new Derived;
    Derived *d=dynamic_cast<Derived*>(b);
    d->ll();
    // i other languages static function give eror whn you call by refrnce of object
    // while in cpp ither lanugages it can be callex
    // d->print();
    // b->print();
    const int var1=10;
    const int  *i=&var1;
    // const int **p=&i;
    int *ptr2=const_cast <int*>(i);
    cout<<*ptr2;
    // cout<< **p<<endl; 
    return 0;
}