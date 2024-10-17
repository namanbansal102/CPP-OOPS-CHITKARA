#include<iostream>
using namespace std;
class Employee{
    public:
    int salary;
    Employee(int sal){
        salary=sal;
    }
    void print(){
        cout<<salary<<endl;
    }
    void operator --(int n){
        salary++;
    }
};
int main() {
    Employee e1(100);
    e1.print();
    
    e1==5;
    e1.print();
    return 0;
}