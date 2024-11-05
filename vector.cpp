#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    int arr[]={1,2,3,3,4,3,5};
    vector<int>numbers(arr,arr+sizeof(arr)/sizeof(int));
    vector<int>num1={1,2,3};
    // numbers.push_back(1);
    // numbers.reserve(numbers.begin(),numbers.end());
    // numbers.pop_back();
    // numbers.erase(numbers.begin()+1,numbers.end()-3);
    // numbers.insert(numbers.begin()+1,5);
    numbers.erase(remove(numbers.begin(),numbers.end(),3),numbers.end());
    for (size_t i = 0; i < numbers.size(); i++)
    {
        cout<<numbers[i];
    }
    cout<<endl;
    cout<<numbers.empty();
    // for (size_t i = 0; i < numbers.size(); i++)
    // {
    //     cout<<numbers[i];
    // }
    
    cout<<endl;
    return 0;
}