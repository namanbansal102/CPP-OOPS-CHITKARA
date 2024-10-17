#include "newFile.cpp"
#include<iostream>
using namespace mymath;

int fibonacci(int n,int* arr){
    
    if (n==1 || n==0)
    {
        return n;
    }
    if (arr[n]!=0)
    {
        return arr[n];
    }
    
    int part=fibonacci(n-1,arr)+fibonacci(n-2,arr);
    arr[n]=part;
    cout<<part<<" ";
    return arr[n] ;
    
}
int main() {
    // cout<<ns1::ret()<<" ";
    int arr[10]={};
    fibonacci(8,arr);
//    cout<<arr[7];

    return 0;
}