#include<iostream>
using namespace std;
class Getset{
    int id;
    public:
        void set(int x){
            id=x;
        };
        int get(){
            return id;
        };
};
int main() {
    Getset g;
    g.set(4);
    cout<<g.get();
    return 0;
}