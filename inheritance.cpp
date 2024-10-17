#include<iostream>
using namespace std;
class Base{
    protected:
        int x;
    public:
        void display(){
            x=100;
            cout<<x<<endl;
        }
};
class Child1:private Base{
    protected:
        int y;
    public:
        void display1(){
            y=100;
            cout<<y<<endl;
        }
};
class Child2:protected Child1{
    protected:
        
    public:
        void display2(){
            cout<<x;
            display();
        }
};
int main() {
    Child2 c2;
    Child1 c1;
    c2.x;
    // displayprotected
    c2.display();
    return 0;
}