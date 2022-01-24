#include<iostream>
using namespace std;
int main(){
    int loan,rate,month;

    cout<<"Enter loan amount: ";
    cin>>loan;
    cout<<"Enter rate: ";
    cin>>rate;
    cout<<"Enter number of month: ";
    cin>>month;

    int interest = (loan * rate) / 100;
    int totalInterest = interest * month;

    cout<<"Monthly Interest: "<<interest;
    cout<<"\nYour Interest is: "<<totalInterest;
    return 0;
}
