#include<iostream>
using namespace std;
class Account{
private:
    string account_holder;
    string account_no;
    int balance;

public:
    /// this constructor will work automatically if no user constructor mentioned
    Account(){/// 0 argument constructor(default constructor)
        cout<<"\nThis is default constructor\n";
    }
    /// building constructor by prgrammer,
    /// if constructor is built, 0 arg constructor will be auto-vanished
    Account(string holder,string accNo,int amt){/// 3 args constructor
        cout<<"\nThis is 3 arguments constructor\n";
        this->account_holder = holder;
        this->account_no = accNo;
        this->balance = amt;
    }
    void initializeData(string holder,string accNo,int amt){
        this->account_holder = holder;
        this->account_no = accNo;
        this->balance = amt;
    }
    void showData(){
        cout<<"\n_______Account Info________\n\n";
        cout<<"Holder: "<<this->account_holder;
        cout<<"\nAccount Number: "<<this->account_no;
        cout<<"\nCurrent Balance: "<<this->balance<<" ks.\n";
    }
};
int main(){
    /// default constructor is just for placing space on memory
    /// no initialize by compiler, have to do by programmer
    Account acc1 = Account();/// create obj using default (0 arg) constructor if programmer not mentioned any constructor

    Account acc2 = Account("Cherry","87654321",300000);/// create obj using 3 args constructor

    acc1.initializeData("Jeon","12345678",500000);
    acc1.showData();

    acc2.showData();
    return 0;
}
