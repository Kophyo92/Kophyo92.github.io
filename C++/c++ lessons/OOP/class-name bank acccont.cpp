#include<iostream>
using namespace std;

class Account{
/// data
public:
    string accountHolder;
    string accountNo;
    int balance;
/// actions
    void createAccount(string holder,string no,int initBal){
        accountHolder = holder;
        accountNo = no;
        balance = initBal;
    }
    void deposit(int depositAmt){
        balance = balance + depositAmt;
    }
    bool withdraw(int withdrawAmt){
        if(withdrawAmt > balance)
            return false;
        else{
            balance = balance - withdrawAmt;
            return true;
        }
    }
    void showData(){
        cout<<"\n_______Current Info_______\n\n";
        cout<<"Holder name: "<<accountHolder;
        cout<<"\nAccount No: "<<accountNo;
        cout<<"\nCurrent Balance: "<<balance;
        cout<<"\n";
    }
};

int main(){
    Account acc1;

    acc1.createAccount("Jeon","12345678",1000000);
    acc1.showData();

    cout<<"\n_____deposit(200000ks)________\n\n";
    acc1.deposit(200000);
    cout<<"After deposit, current balance: "<<acc1.balance<<" ks\n";

    cout<<"\n_____Withdraw(1500000 ks)_______\n\n";
    if(acc1.withdraw(1500000)){
        cout<<"Success...\n";
        cout<<"Current Balance: "<<acc1.balance<<"\n";
    }
    else{
        cout<<"Sorry Not enough!\n";
        cout<<"Current Balance: "<<acc1.balance<<"\n";
    }

    cout<<"\n_____Withdraw(1000000 ks)_______\n\n";
    if(acc1.withdraw(1000000)){
        cout<<"Success...\n";
        cout<<"Current Balance: "<<acc1.balance<<"\n";
    }
    else{
        cout<<"Sorry Not enough!\n";
        cout<<"Current Balance: "<<acc1.balance<<"\n";
    }


    return 0;
}
