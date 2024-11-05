#include<iostream>
#include<map>
using namespace std;
int main() {
    map<int,string> mawp;
    mawp[1]="Naman";
    mawp[2]="Bansal";
    mawp[3]="Naman1";
    mawp[4]="Naman2";
    mawp[5]="Naman3";
   map<int,string>::iterator it=mawp.begin();
   while (it!=mawp.end())
   {
    cout<<it->first<<endl;
    cout<<it->second<<endl;
    ++it;
   }
   
    return 0;
}