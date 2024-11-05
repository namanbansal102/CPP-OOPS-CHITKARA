#include<iostream>
using namespace std;
class Shape{
    public:
    Shape(){
        cout<<"Runnning Shape Constructor"<<endl;
    }
    virtual float getArea(float side)=0;
    virtual float getArea(float side1,float side2)
    {
        
    };
   
};
class Square:public Shape{
    public:
    float  getArea(float side) {
        cout<<side*side<<endl;
    }

};
class Rectangle:public Shape{
    public:
    float  getArea(float side1,float side2) override{
        cout<<side1*side2<<endl;
    }
    float  getArea(float side) override{
        cout<<side*side<<endl;
    }
    
};
class Circle:public Shape{
    public:
    float  getArea(float side) override{
        cout<<side*side<<endl;
    }
};
int main() {
   Square s;
   s.getArea(12.6);
   Rectangle r;
   r.getArea(12.4,2 );

    return 0;
}