#include<iostream>
#include<new>
using namespace std;
void allocate(int* myarray,size_t arraySize){
   
    for (int i = 0; i < arraySize; i++)
    {
        myarray[i]=i+1;
    }
}
void deallocate(int* myarray){
    delete[] myarray;  
}
void display(int* myarray,int arraySize){
       
    for (int i = 0; i < arraySize; i++)
    {
       cout<<myarray[i]<<endl;
    }
}
int main() {
    try{
    size_t arraySize;
    cout<<"Enter Array Size"<<endl;
    cin>>arraySize;
     int* myarray=new int[arraySize];
    allocate(myarray,arraySize);
    deallocate(myarray);
    deallocate(myarray);
    display(myarray,arraySize);
    allocate(myarray,arraySize);
        }
    catch(bad_alloc& e){
        cout<<e.what();
    }
    catch(exception& e){
cout<<e.what();
    }
    
    return 0;
}