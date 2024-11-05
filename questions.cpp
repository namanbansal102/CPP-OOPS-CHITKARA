#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int a;
    double b;
    string  s;
    cin>>a;
    cin>>b;
    getchar();
    getline(cin, s);
    cin.ignore(); 
    cout<<(int)(a+b)<<endl;
    cout<<fixed<<setprecision(1)<<a+b<<endl;
    cout<<s;
    
    return 0;
}