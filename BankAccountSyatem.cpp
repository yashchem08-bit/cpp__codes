#include <iostream>
using namespace std;
class BankAccount
{
private:
    string AccNum;
    int PIN;
    double balance;

public:
    BankAccount(string Accnum,double bal){
        AccNum = Accnum;
        balance = bal;
    }
    double mybalance()const {
        return balance;
    }
    void deposit(double amount){
        if(amount > 0){
            balance += amount;
        }else{
            cout<<"INVALID INPUT";
        }
        
    }
    void withdraw(double amount){
        if(amount > 0 && amount <= balance){
             balance -= amount;
             cout<<"YOUR BALANCE IS :: "<<balance;
        }else{
            cout<<"INVALID INPUT";
        }
       
    }
    void printBalance(){
        cout<<mybalance();
    }
};
int main(){
    BankAccount myacount("122332",500);
    myacount.deposit(700);
    myacount.printBalance();
    myacount.withdraw(2000);

}