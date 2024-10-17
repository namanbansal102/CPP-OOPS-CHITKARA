#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Base";
    }
    Base(int a){
        cout<<"Base";
    }
    int add(int a,int b){
        cout<<"Running base Class Function"<<endl;
            return a+b;
    }
        int multiply(int a,int b){
        cout<<"Running base Class Function"<<endl;
            return a*b;
        } 
    };
class Derived:public Base{
    public:
    Derived(){
        cout<<"Derived";
    }
    Derived(int x):Base(x){
        cout<<"Running Dervived"
    }
    int add(int a,int b){
        cout<<"Running Derived Class Function"<<endl;
        return a+b;
} 
};
int main() {
    Derived d;
    // int x=1000;
    // char c='A';
    // int* p=(int*)&c;
    // void *v=&x;
    // cout<<*(int*)v;
    return 0;
}