#include<iostream>
using namespace std;
int main(){
    int price,qty,subTotal,total;
    cout<<"Enter Item Price: ";
    cin>>price;
    cout<<"Enter Item Quantity: ";
    cin>>qty;

    subTotal = price *qty;
    cout<<"______________Item's Details_____________";
    cout<<"\nItem Price: "<<price;
    cout<<"\nItem Quantity: "<<qty;
    if (subTotal > 5000){
        cout<<"\nYou got 10% discount!";
        total = subTotal - (subTotal * 10) / 100;

    }
    else
        total = subTotal;

    cout<<"\nTotal Expense: "<<total;

    return 0;
}
