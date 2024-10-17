#include<iostream>
using namespace std;

int main() {
    cout<<"Players Name";
    string names;
    getline(cin,names);

        for (int j = 0; j < names.length(); j++)
        {
            if (names[j]==' ')
            {
                continue;
            }
            if (names[j]>=65 && names[j]<=92)
            {
                names[j]=names[j]+32;
            }
            else if (names[j]>=97 && names[j]<=122)
            {
                names[j]=names[j]-32;
            }  
    };
    cout<<names;
    
    return 0;
}