#include<iostream>
using namespace std;
class Data{
    public:
    int a;
    void print(){
        cout<<"Value of a is:::"<<a<<endl;
    }
};
int main() {    
    Data d,*dp;//for(int i=0;i<=5;i++){
        
    
    dp=&d;
    dp->a=3;
    dp->print();
    d.print();
    // int Data::*ui=&Data::a;
    // d.*ui=10;
    // cout<<d.*ui;
    // dp->print();
    
    return 0;
}



