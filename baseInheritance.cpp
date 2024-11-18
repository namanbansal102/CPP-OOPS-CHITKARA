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
        this->sound();
    }
};
class Cat:public Animal{
    public: 
    void sound(){
        cout<<"Billi Sound"<<endl  ; 
    }
    void catPunch(){
        cout<<"Dispalying Punch Of Cat"<<endl;
    }
};
int main() {
    Animal *ptr;
    Cat c;
    ptr=&c;
    ptr->sound();
    Animal *a=new Cat;

    

    return 0;
}