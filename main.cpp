#include<iostream>
using namespace std;
int i=1;
static void increment(){
    cout<<i<<endl;
    i++;
}
class Student{
    public:
    static int make(){
        return 1;
    }
};
int main() {
    string s="abcded";
    int count=0;
    increment();
    increment();
    increment();
    increment();
    cout<<count;
    
    
    
    return 0;
}