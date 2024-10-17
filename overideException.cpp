#include<iostream>
#include<new>
#include<exception>

using namespace std;
class MyException:public exception
{
    public:
    const char* what() const throw(){
        return "My Custom Throw";
    }
};

int main() {
    int x=0;
    int y=0;
    try{

    if (y==0)
    {
        MyException e;
        throw e;
    }
    cout<<x/y;
    }
    catch(const exception& e){
        cout<<e.what();
    }
    

    return 0;
}