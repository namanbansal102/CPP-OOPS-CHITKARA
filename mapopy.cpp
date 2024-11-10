#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main() {
    map<string,int> mawp;
    mawp["a"]=1;
    mawp["c"]=3;
    mawp["b"]=2;
    mawp["A"]=2;
    mawp["AB"]=2;
    mawp["abc"]=2;
    mawp["aN"]=78;
   map<string,int>::iterator it=mawp.begin();
   while (it!=mawp.end())
   {
    cout<<it->first<<endl;
    cout<<it->second<<endl;
    ++it;
   }

   // copyin a map

    return 0;
}