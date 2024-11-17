#include<iostream>
#include<cstring>
#include<string>
using namespace std;
string returnLongest(string str){
    int len=str.size();
    int st=0;
    int end=0;
    int j=0;
    int max=-1;
    string k;
    for (int i = 0; i <len ; i++)
    {
        char ch=str[i];
        if(ch==' '){
            if(max<i-j-1){// agar mera max greater hota hai toh i-j kr dena
            max=i-j-1;
        k=str.substr(j,i-j-1);
        cout<<"My Substring is "<<k<<endl;
            }
        j=i+1;
        }
        // j se i tk chalega
    }
    cout<<endl;
        if(max<len-j){// agar mera max greater hota hai toh i-j kr dena
            max=len-j;
        k=str.substr(j);
        }
        cout<<max<<endl;
        cout<<"My akhiri Substring is "<<k<<endl;
        cout<<"My akhiri Substring is "<<j<<endl;
    
}
int main() {
    string s="1 + 5 * 5 +2";
    returnLongest(s);
    return 0;
}