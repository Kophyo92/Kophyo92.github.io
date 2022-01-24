#include<iostream>
using namespace std;
int main(){
    int price,discount;

    cout<<"Enter Product Price: ";
    cin>>price;
    cout<<"Discount Value: ";
    cin>>discount;

    int finalPrice = price - ((price * discount) / 100);

    cout<<"After discount,price: "<<finalPrice;
    return 0;
}

