#include <iostream>
using namespace std;
class Example
{
public:
Example(){

}
    int x;
    void setValue(int a)
    {
        x = a;
    }
    int get_value() const
    {
        return x;
    }
    void modify_value() const{
        x=40;
    }
};
int main()
{

     Example obj;
    // acha read only object me pass nhi kr skte
    obj.x = 10;
    obj.setValue(100);
    cout << obj.get_value();
    return 0;
}