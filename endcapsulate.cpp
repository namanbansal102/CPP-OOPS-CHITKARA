#include<iostream>
using namespace std;
int value(){
    return 10;
}
class A{
    protected:
    int a=4;
    void square(int b){
        cout<<b*b<<endl;
    }
    void rectangle(int a,int b){
        cout<<a*b<<endl;
    }
    void circle(int b){
        cout<<2*3.14*b;
    }
};
class B:A{
    public:
        void calc(string shape,int side1,int side2=4){
            if (shape=="square")
            {
                square(side1);
            }
            if (shape=="rectangle")
            {
                rectangle(side1,side2);
            }if (shape=="circle")
            {
                circle(side1);
            }
            
        }

};
int main() {
    cout<<value();
    B b1;
    b1.calc("square",3);
    return 0;
}