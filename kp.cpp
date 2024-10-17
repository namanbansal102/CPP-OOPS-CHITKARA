#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class BankAccount
{
    private:
    // int balance;
    public:
    BankAccount(){
    string accountNumber ="SB1001";
    int balance=2000;
    }
    void withdraw(int amount,string accountNumber){
        if (accountNumber=="SB1001")
        {
            if(amount > balance){

            cout << "Insufficient balance" << endl;
        }
        else{
            balance -= amount;
            

        }
        }else{
            cout<<"Wrong Account Number"<<endl;
        }
    } 
    void Balance(string accountNumber){
        if (accountNumber=="SB1001")
        {
            cout << "Your balance is: " << balance << endl;
        }
        else{
            cout<<"Wrong Account Number"<<endl;
        }
        
    }
    void deposit(int amount,string accountNumber){
        if (accountNumber=="SB1001"){
            balance += amount;

        }else{
            cout<<"Wrong Account Number"<<endl;
        }
    }
};

int main (){

// BankAccount account;
// account.deposit(1000,"SB1001");
// account.withdraw(500,"SB100");
// account.withdraw(5000,"SB1001");
// account.Balance("SB1001");

}