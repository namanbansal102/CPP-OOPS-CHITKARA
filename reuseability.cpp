#include<iostream>
using namespace std;
class Maths{
    int mathmarks;
    protected:
    Maths(int marks):mathmarks(marks){}
    void displaymathsMarks(){
        cout<<"Math marks:::"<<mathmarks<<endl;
    }
};
class Science{
    int scmarks;
    protected:
    Science(int marks):scmarks(marks){}
    void displayscienceMarks(){
        cout<<"Math marks:::"<<marks;
    }
};
class Student:public Maths,public Science{
    public:
    Student(int mMarks,int sMarks):Maths(mMarks),Science(sMarks){}
    void displayStudentMarks(){
         displaymathsMarks();
         displayscienceMarks();
    }
};
class Base{
    public:
    int n1;
    Base(int x):n1(x){}
    void display(){
        cout<<"n1=="<<n1<<endl;
    }
};
class Derived:public Base{
    public:
    int n2;
    Derived(int y):Base(y){
        n2=y;
    }
    void display(){
        cout<<"n2=="<<n2<<endl;
    }
};
int main() {
    Student s(100,200);
    s.displayStudentMarks();
    cout<<endl;
    Derived d(1);
    d.display();
    return 0;
}