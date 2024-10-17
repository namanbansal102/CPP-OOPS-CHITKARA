#include<iostream>
using namespace std;

int sum(int a,int b){
    return a+b;
}
void display(char *p){
    cout<<p;
}
int differnce(int a,int b){
    return a-b;
}
int main() {
    int (*sumN)(int,int)=&sum;
    int (*differnceN )(int,int)=&differnce;
    int a=2;
    cout<<&differnce;
    // cout<<ch;
}