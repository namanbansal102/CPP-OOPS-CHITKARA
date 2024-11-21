#include<iostream>
using namespace std;
class A{
    private:
    int x=90;
    friend void show(A& a);
};
void show(A& a){
    cout<<a.x;
}
int main() {
    A a;
    show(a);
    return 0;
}