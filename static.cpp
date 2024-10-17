#include<iostream>
using namespace std;
class Stat
{
    public:
    static int x;
    static void increment()
    {
        cout << x << endl;
        x++;
    }
    void display();
};
void Stat::display(){
    cout<<"Running Display Function";
}
int Stat::x=10;
int main()
{
    Stat::increment();
    Stat::increment();
    Stat s1;
    s1.display();
    return 0;
}