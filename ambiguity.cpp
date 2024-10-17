#include<iostream>
using namespace std;
void myvalue(){
    static int x=10;
    x++;
    cout<<x<<endl;
}
class A{
    public:
    void display(){
        cout<<"Class A";
    };
};
class B{
    public:
    void display(){
        cout<<"Class B";
    };
};
class C:public A,public B{
    public:
    void myDisplay(){
        A::display();
    }
   
};
int main() {
    myvalue();
    myvalue();
    myvalue();
    return 0;
}