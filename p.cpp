#include<iostream>
using namespace std;

class B{
    public:
    int x=7;
    void increment();
};
void B::increment(){
    // in this how encapsulation is performetd
    cout<<"Incrementing"<<x;;
}
int main() {
    B b;
    cout<<95%60; 
    return 0;
}