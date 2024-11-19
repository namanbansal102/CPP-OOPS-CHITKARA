#include<iostream>
using namespace std;
int main() {
    // to typecast a pointer
    int i=10;
    void *v=static_cast<void*>(&i);
    string *ptr=static_cast<string*>(v);
    cout<<ptr;
    // static cast is mainly used for upcasting like converting
    // from derived to base class this is called upcasting of my class
    // while dynamic cast is mainly used for downcasting my function and my members
    
    return 0;
}