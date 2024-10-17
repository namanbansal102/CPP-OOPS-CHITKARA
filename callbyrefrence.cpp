#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
    cout<<"Inside Function"<<endl;
    cout<<*x<<endl;
    cout<<*y<<endl;
}
int main() {
    int x=3;
    int y=4;
    swap(&x,&y);
    cout<<"Out Of Main Function"<<endl;
    // i am making my 2d array
    int **arr=new int*[2];
    for (int i = 0; i < 2; i++)
    {
        arr[i]=new int[2];
    }
    
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}