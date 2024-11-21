#include<iostream>
#include<vector>
using namespace std;

void codequotient(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        int n = v[i];
        if (n % 10 == 0) {
            v.erase(v.begin()+i);
            v.push_back(n);
        }
    }
    for (int i=0; i<v.size(); ++i)
        cout <<' '<< v[i];
    }


void codequotient1(vector<int>& v) {
    for (int i = 0; i < v.size(); i++){

     int n = v[i];
            v.erase(v.begin()+i);
             if (n % 2 == 0)
      v.push_back(n);
    }

  for (int i=0; i<v.size(); ++i)
        cout << ' ' << v[i];
}

    int main() {
        vector<int> v{0, 1, 4, 3, 1, 3};
        codequotient1(v);
        cout<<"Calculating Modulus"<<endl;
        cout<<10%10;
        return 0;
}