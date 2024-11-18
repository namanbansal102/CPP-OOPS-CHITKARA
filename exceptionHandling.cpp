#include<iostream>
#include<exception>
using namespace std;
int divison(int num,int a,int b){
   try{
    if(a-b==0){
        throw "Unable To Divide By Zero";
    }
    else{
        cout<<num/(a-b);
    }
   }
   catch(const char* e){
    cout<<e<<endl;
   }
    
}
int main() {
    int x=-1; 
    cout<<divison(50,2,2);
    return 0;
}