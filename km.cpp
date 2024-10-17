#include<iostream>
using namespace std;
class A{
    public:
    int x=10;
};
class B:public A{
    void display(){
        cout<<x;
    }
};
class C:public B{
    void display(){
        cout<<x;
    }
}

int main() {
    
    return 0;
}