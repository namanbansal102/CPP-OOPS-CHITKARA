#include<iostream>
using namespace std;
class MyClass{
    int nums[50];
    int len=0;
    public:
    MyClass(){
        for (int i = 0; i < 50; i++)
        {
            nums[i]=0;
        }   
    }
    void remove(int *arr){
        len=sizeof(arr)/sizeof(int);
        for (int i = 0; i <10; i++)
        {
            nums[arr[i]]+=1;
        }
        for (int i = 0; i < 50; i++)
        {
            cout<<nums[i]<<" ";
            if(nums[i]==1){
                cout<<i<<" f";
                }
        }
        
        cout<<endl;
    }
};
int main() {
    cout<<"Program To Display"<<endl;
    MyClass m1;
    char ch='1';
    ++ch;
    int arr[]={1,1,2,2,3,4,4,5,3};
    m1.remove(arr);
    return 0;
}