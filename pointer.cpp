#include<iostream>
using namespace std;
class MyClass{
    public:
    int a;
   void display(int a){
    a=a;
    cout<<"Displaying Function "<<this->a<<endl;
    }
    void displayAdd(){
        cout<<a<<endl;
    }
};
 
int main() {
    MyClass *A,B;
    A=&B;
    A->display(3);
    B.displayAdd();
    char a[][7]={"mayank"+-,"karan"};
    // void A::(*ptr) = &display();
    cout<<a[0][1];
    return 0;
}