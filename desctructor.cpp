#include<iostream>
using namespace std;
class A{
    char *ch=new char[3];
    int *m;
    public:
    A(){  
        *ch='a';
        m=new int(3);
        cout<<"Constructor Called A"<<endl;
    }
    ~A(){
        delete ch;
        delete m;
        cout<<"Desctructor Called A"<<endl;
    }
};
class C{
    public:
    C(){
        cout<<"Constructor Called C"<<endl;
    }
    ~C(){
        cout<<"Desctructor Called C"<<endl;
    }
};
class M{
    public:
    M(){
        cout<<"Constructor Called M"<<endl;
    }
    ~M(){
        cout<<"Desctructor Called M"<<endl;
    }
};
class B:C,A,M{
    public:
    B(){
        cout<< "B class Constructor Called"<<endl;
    }
    ~B(){
        cout<< "B class Desctutor Called"<<endl;
    }


};
int main() {
    B a2;
    cout<<"progrm"<<endl;
    return 0;
}