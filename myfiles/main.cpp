#include<iostream>
#include "file1.cpp"
#include "file2.cpp"
#include "file3.cpp"
#include "file4.cpp"
using namespace std;
class child:public Sum{
    public:
    void childDisplay(int n1,int n2){
     cout<<add(n1,n2)<<endl;   
    };
};
int main() {
    Sum s1;
    cout<<s1.add(1,2)<<endl;
    child s3;
    s3.childDisplay(1,2);

    return 0;
}