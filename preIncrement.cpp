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
    void operator --(int){
        salary++;
    }
};
int main() {
    Employee e1(100);
    e1.print();
    
    e1--;// ye vala case post increment me hai
    e1.print();
    return 0;
}