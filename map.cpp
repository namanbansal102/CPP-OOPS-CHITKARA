#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main() {
    map<int,int> mawp;
    mawp[1]=50;
    mawp[2]=60;
    mawp[6]=50;
    mawp[3]=30;
    mawp[4]=50;
    mawp[5]=70;
    cout << mawp.lower_bound(1)->first<<" "<<mawp.lower_bound(1)->second<<endl;
    cout<<mawp.upper_bound(1)->first<< " " <<mawp.upper_bound(1)->second;
    return 0;
}