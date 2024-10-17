#include<iostream>
#include<fstream>
using namespace std;
int main() {
    
    ofstream outFile("D://data.txt");
    string inp;
    getline(cin,inp);
    outFile<<inp;
    cout<<"File Created";
    return 0;
    
}