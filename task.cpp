#include<iostream>
using namespace std;
    static int objCount;
class MyClass{
    private:
    public:
    MyClass(){
        objCount++;
        cout<<"Object Created"<<objCount<<endl;
    }
    ~MyClass(){
        objCount--;
        cout<<"Object Destroyed"<<objCount<<endl;
    }
    static int display(){
        return objCount;
    }
};

int main() {
    MyClass a1;
    MyClass a2;
    MyClass a3;
    MyClass a4;
    MyClass::display();
    return 0;
}