#include<iostream>
#include<fstream>
using namespace std;
int main() {
    
   ofstream outFile("D://Data.txt");
   string line;
   getline(cin,line);
   outFile<<line;
   cout<<"File Created";


    return 0;
    
}