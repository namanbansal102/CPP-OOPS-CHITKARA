#include<iostream>
using namespace std;
class  A{
public:
    int val1;
    int val2;
    void setData(int value1, int value2){
        val1=value1;
        val2=value2;
    }
    void displayData1(){
        cout<<"The value1 is"<<val1<<endl;
    }
    void displayData2(){
        cout<<"The value2 is"<<val2<<endl;
    }
};

class B : public A{
    public:
    int val3;
    B(int val1,int val2,int value3){
        val3=value3;
        setData(val1,val2); 
        // cout<<"Running B Class Const";
    }
    
};
int main(){
    B b(1,2,3);
    b.displayData2();
    b.displayData1();
}