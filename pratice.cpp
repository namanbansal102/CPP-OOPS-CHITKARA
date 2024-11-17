#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"A Default Called"<<endl;
    }
    A(int b){
        cout<<"A Parameter Called"<<endl;

    }
    void introduce(){
        cout<<"Introcudce Funtion Called"<<endl;
    }
    
};
class B:public A{
    public:
    B():A(){
        cout<<"B Called"<<endl;
    }
};
class C:public A{
    public:
    C():A(){
        cout<<"C Called"<<endl;
    }
    void nm(){
        A(6);
        cout<<"NM Called"<<endl;
    }  
    void introduce(){
        cout<<"Introduce C Called C";
    }
};
int main() {
    char ch='a';
    A *a;
    C c;
    a=&c;
    a->introduce();

    
    


    return 0;
}