#include<iostream>
#include<cstring>
using namespace std;
class myname{
    public:
    string fname;
    string lname;
        void display(){
            fname.append(" ");
            fname.append(lname);

             cout<<fname;
        }
};
void sum(int a,int b){
    int res=a+b;
    cout<<a+b;
};
int area(float a){
    return a*a;
}
int area(int a){
    return a*a;
}

int main() {

    myname m1;
  
    sum(10.45f,56.0f);
    return 0;
}