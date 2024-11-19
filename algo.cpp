#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<list>
using namespace std;
class A{// suppose i have an abstract class with alleast one pure virtual function
public:
    virtual void callme()=0;
    void another(){
        callme();
        cout<<"This is Another Function in Class"<<endl;
    }

};
class B:public A{
    void callme(){
        cout<<"Call Funciton in Class (b)"<<endl;
    }
    void callme1(){
        cout<<"Call 111 Funciton in Class (b)"<<endl;
    }
};
int main() {
    string str="bansal";
    auto it=find(str.begin(),str.end(),'n');
    // cout<<*it<<endl;
    // if i want to built a vector from my vector than i can used this function
    int arr[]={1,2,3,4,5};
    vector<char> numbers(str.begin(),str.end());
    // cout<<numbers[0]<<endl;
    // cout<<numbers[1]<<endl;
    // cout<<numbers[2]<<endl;
    map<int,int> h_map;
    h_map.insert(pair<int,int>(10,20));
    
    // now another topic is STL which is list
    list<int> lst{1,2,3,4,5};
    list<int> lst1{1,2,3,4,5};
    lst.merge(lst1);
    for(auto it:lst){
        // cout<<it<<" ";
    }
     A *a;
     B b;
    a=&b;
    a->another();
    // function hamesha a ke run honge jab tak b call na ho
    return 0;
}