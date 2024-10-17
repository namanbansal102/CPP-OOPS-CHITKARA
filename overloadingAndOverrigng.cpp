#include<iostream>
using namespace std;
class Base{
    public:
    Base(){
        cout<<"Running Base Constructor (Default)"<<endl;
    }
    Base(int x){
        cout<<"Running Peri Constructor (Single Base)"<<endl;
    }
    Base(int x,int y){
        // Base(x);
        cout<<"Running Peri Constructor (Double Base)"<<endl;
    }
};
class Derived:public Base{
    int y=6;
    int x=6;
    public:
    Derived(){
        Base();
        Base(x);
        Base(x,y);
        cout<<"Running Derived Constructor"<<endl;
    }
    
   
};
int main() {
    Derived d;
    // d.derivedDisplay();
    return 0;
}