#include<iostream>
using namespace std;
class Animal{
    public:
    Animal(){
        cout<<"Animal Constructor"<<endl;
    }
   virtual void sound(){
        cout<<"Generic Sound (Animal)"<<endl;
    }
    void carp(){
        sound();
    }
};
class Cat:public Animal{
    public: 
    void sound(){
        cout<<"Billi Sound"<<endl;
    }
};
int main() {
    Animal *ptr;
    Cat c;
    ptr=&c;
    ptr->sound();
    ptr->carp();
    return 0;
}