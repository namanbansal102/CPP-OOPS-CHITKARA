#include<iostream>
#include<map>
#include<iterator>
using namespace std;
void addItem(int id,string book,map<int,string> h_map){
   if(h_map[id]==""){
    cout<<"if";
        h_map[id]=book;
    cout<<id;
    }
    else{
        cout<<"Book Exists Want to Update Book";
        bool toUpdate;
        cin>>toUpdate;
        if(toUpdate){
            h_map[id]=book;
            cout<<"Book Update Succesfully";
            return;
        }
    }
}
void displayBook(map<int,string> h_map){    
    if(h_map.empty()){
        cout<<"Map Empty";
        return;
    }
    map<int,string>::iterator it=h_map.begin();
    while (it!=h_map.end())
    {
        cout<<it->first<<" "<<it->second;
        it++;
    }
}
void removeBook(int id,map<int,string> h_map){
    if(h_map[id]==""){
        cout<<"No Such Book Exists";
        return;
    }
    h_map.erase(id);
    cout<<"Book Removed Successfully";
}
void isValid(int id){
    if(id==0){
        cout<<"Invalid DataType";
        return;
    }
}
int main() {
    map<int,string> map;
    map[1]="JAVA";
    map[2]="pyhon";
    map[3]="c++";
   int id;
   cin>>id;
   auto x="";
   cout<<x;
   removeBook(id,map);

   
    return 0;
}