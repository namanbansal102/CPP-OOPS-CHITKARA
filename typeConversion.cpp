#include<iostream>
using namespace std;
class Integer{
    int a;
    public:
    Integer(){// this is the default constructor without parameters

    }
    Integer(int a){// this is the constructor with parameters
    this->a=a;
    }
    operator string(){
        cout<<"Coverstion Operator Called"<<endl;
        return to_string(a);
    }
    friend ostream& operator <<(ostream& out,const Integer& I){
        out<<I.a;
        return out;
    }


};
int main() {
    Integer a=6;
    string str=a;// this is known as implict type conversion in cpp
    cout<<str<<endl;
    cout<<"This is My Integer ";
    cout<<a<<endl;
    string str2=static_cast<string>(a);
    cout<<"my Str2 is:::"<<str2<<endl;


    return 0;
}