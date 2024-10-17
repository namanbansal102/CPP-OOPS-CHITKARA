#include<iostream>
#include<stdlib.h>
#include<stdexcept>
using namespace std;
void arrayRange(int idx,int size){
    int x[]={1,2,3,4,5};
    if (idx>=size)
    {
        throw out_of_range("Index Out Of Range");
    }
    
    cout<<x[idx]<<endl;
}
int main() {
    try{

    arrayRange(7,6);  
    }
    catch(const out_of_range e){
        cout<<"1st Exception"<<endl;
        cout<<e.what();
        }
    catch(const exception& e1){
        cout<<"2nd Exception"<<endl;
        cout<<e1.what();
        }
      return 0;
} 