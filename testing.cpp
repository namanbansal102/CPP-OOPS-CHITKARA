#include <iostream> 
using namespace std;
class Base{
public:
Base() {
cout << "Base Constructor" << endl; 
show();
}


virtual void show()
{
    cout << "Base Show" << endl;
}
virtual ~Base()
{
    cout << "Base Destructor" << endl;
    show();
}
};
class Derived : public Base{
public:
    Derived()
    {
        cout << "Derived Constructor" << endl;
        show();
    }
    virtual void show()
    {
        cout << "Derived Show" << endl;
    }
    virtual ~Derived()
    {
        cout << "Derived Destructor" << endl;
        show();
    }
};
int main()
{
    Base *obj = new Derived();
    delete obj;
    return 0;
}