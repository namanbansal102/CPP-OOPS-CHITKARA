#include<iostream>
#include<fstream>
using namespace std;
int main() {
    ifstream readF;
    readF.open("d://data.txt");
    if (!readF)
    {
       cout<<"File Not Found";
    }
       string c;
       int i=0;
    while (!readF.eof())
    {
        char c;

       readF>>c;
       cout<<c;
       i++;
       
    }
    
    cout<<c;
    
    
    

    return 0;
}