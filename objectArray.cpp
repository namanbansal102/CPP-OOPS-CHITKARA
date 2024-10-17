#include<iostream>
using namespace std;
class MyClassB;
class MyClassA{
    private:
    int x=10;
    public:
    void display(){
        cout<<"Display Class A "<<x<<endl;
    }
    friend class MyClassB;
    friend void changeF(MyClassA a);
};

class MyClassB{
    public:
    void display2(MyClassA &a){
        a.x=13;
        cout<<"Display Class B"<<endl;
    };
};
void changeF(MyClassA a){
    a.x=16;
        cout<<"In Change Friend Function Class B"<<a.x<<endl;
}
int main() {
    MyClassA a;
   a.display();
   MyClassB b;
   b.display2(a);
   a.display();
   changeF(a);
   a.display();
    return 0;
}