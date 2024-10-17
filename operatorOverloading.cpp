#include<iostream>
using namespace std;
class A{
    int x;
    public:
    A(){
        x=10;
    }

    void show(){
        cout<<x<<endl;
    }
    void operator ++(int){
        ++x;
    }

};
int main() {
    A a1;
    a1.show();
    a1++;
    a1.show();

    return 0;
}