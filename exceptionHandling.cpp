#include<iostream>
#include<exception>
using namespace std;
int divison(int num,int a,int b){
    int den=a-b;
    try{
    if(den==0){
        throw "Exception by 0";
    }
    else
        return (num/den);
    }
    catch(const char *err){
        cout<<err<<endl;
    }
    
}
int main() {
    int x=-1; 
    A a=new B();
    cout<<divison(50,2,2);
    return 0;
}