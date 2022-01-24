#include<iostream>
using namespace std;

int calDiscountItem(int price,int discount){
    int finalPrice = price - (price * discount)/100;
    return finalPrice;
}

void calculateInterest(){
    int loan,rate,month;
    cout<<"\nEnter Loan Amount: ";
    cin>>loan;
    cout<<"Enter Interest Rate: ";
    cin>>rate;
    cout<<"Enter Number of Months: ";
    cin>>month;
    int interest = (loan * rate)/100;
    int totalInterest = interest * month;
    cout<<"\nMonthly Interest: "<<interest;
    cout<<"\nTotal Interest: "<<totalInterest;
    cout<<"\n";
}

void countZeroOccurences(){
    int quantity;
    cout<<"\nEnter your desired quantities of numbers: ";
    cin>>quantity;
    int num[quantity];
    int count = 0;
    for(int i = 0;i < quantity;i++){
        cout<<"Enter any number: ";
        cin>>num[i];

        if(num[i] == 0)
            count++;
    }

    if(count == 0)
        cout<<"\nThere is no zero in user input!\n";
    else
        cout<<"\nNumbers of zero: "<<count<<"\n";
}

int main(){

    int price,discount;
    cout<<"Enter Item Price: ";
    cin>>price;
    cout<<"Enter Discount Value: ";
    cin>>discount;
    cout<<"\nAfter Discount,price: "<<calDiscountItem(price,discount)<<"\n";

    calculateInterest();

    countZeroOccurences();

    return 0;
}
