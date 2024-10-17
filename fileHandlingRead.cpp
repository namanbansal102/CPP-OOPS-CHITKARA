#include<iostream>
#include<fstream>
using namespace std;
int main() {
    // we can add custom name instead of read function 
    // ifstream naman1("d:\\data.txt");
    // int k;
    // string str;
    // naman1>>str;
    // // cout<<k<<endl;
    // cout<<str;

// another method of opening my file
    ofstream outFile;
    outFile.open("D://data5.txt");
    // if (!outFile) // in case of ifstream it only works when file not found
    // {
    //    cout<<"File Not Found";
    //    return -1;
    // }
    string p;
    
    outFile<<"My Time 8";

// now in case of overiding data
    // when reading a file not reaching to eof 
   

    return 0;
}