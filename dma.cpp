#include<iostream>
using namespace std;
void printArray(int d[][3]){
    for (int i = 0; i < 2; i++)
    {
       for (int j = 0; j < 3; j++)
       {
        cout<<d[i][j];
       }
       
    }
    
}
int main() {
    cout<<"Dynamic Memory Allcoation"<<endl;
    int n=5;
    char *arr=new char[n];
    int p[]={1,2,3,4,5};
    arr[0]='1';
    arr[1]='1';
    arr[2]='2';
    arr[3]='3';
    arr[4]='3';
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(p)<<endl;
    int d[][3]={{1,2,3}
              ,{4,5,6}
    };
    int **ar=new int*[2];
    for (int i = 0; i < 2; i++)
    {
        ar[i]=new int[3];
    }
    printArray(d);
    return 0;
}