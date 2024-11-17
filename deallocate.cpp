#include<iostream>
// #include <sys/resource.h>

// void printMemoryUsage() {
//     struct rusage usage;
//     getrusage(RUSAGE_SELF, &usage);
//     std::cout << "Memory Usage: " << usage.ru_maxrss << " KB" << std::endl;
// }
using namespace std;
int main() {
    char *arr=new char[5];
    *arr='h';   
    cout<<arr[0]<<endl;
    for(int i=0;i<2,147,483,648;i++){
        int* m=new(nothrow) int(i);  // this would return 0 as my output
        if(!m){
            cout<<"Memory Ends"<<m<<endl;
            break;
        }
    }
    
    return 0;
}