#include<iostream>
using namespace std;
class myprime{

    public:
    int x;
        int& display(){
            
            return x;
        } 
};
int main() {
    cout<<"Program To Print Prime Numbers"<<endl;
    int n1=2;
    int n2=50;
    myprime m;
    // m.primeCheck(n1,n2); 
    
    m.display()=10;
    m.display()=m.display()+2;
    cout<<m.x<<endl;
    
    
    return 0;
}