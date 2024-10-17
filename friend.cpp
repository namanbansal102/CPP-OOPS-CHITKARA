#include<iostream>
using namespace std;
class MyClass2; 
int add(){

}           
class MyClass1{
    private:
    int member1=100;
    public:
        void display(){
            cout<<member1<<endl;
        }
    friend void access(MyClass1 &m1); 
    friend int increment(MyClass1 &m1);
};
int increment(MyClass1 &m1){
    m1.member1++;
}
void access(MyClass1 &mc1){
    mc1.member1++;
    cout<<"In Show Function "<<(mc1.member1)<<endl;
}
int main() {
    MyClass1 m1;
    m1.display();
    access(m1);
    m1.display();
    add();
    
    return 0;
}