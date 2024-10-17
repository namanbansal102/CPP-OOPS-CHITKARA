#include<iostream>
using namespace std;
class Bank{
    private:
        int AcNumber;
        int amount=0;
    public:
    int deposit(int ac){
        amount+=ac;
    }
    int withDraw(int ac){
        if (amount-ac<0)
        {
            return amount;
        }
        amount-=ac;
        return amount;
    }
    int balance(){
        return amount;
    }

};
class Calculator{
    int a;
    int b;
    public:
     Calculator(int x,int y){
        a=x;
        b=y;
        return a;
    }
    public:
    void sum(){
        cout<<a+b;
    }
};
int main() {
        Calculator c(4,5);
        c.sum();
    
    return 0;
}

