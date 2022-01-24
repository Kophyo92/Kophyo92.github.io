#include<iostream>
using namespace std;
int main(){
    int dayInput;

    cout<<"Enter Number of Days: ";
    cin>>dayInput;

    int years = dayInput / 365;
    int months = (dayInput % 365) / 30;
    int days = (dayInput % 365) % 30;

    cout<<"Years: "<<years;
    cout<<"\nMonths: "<<months;
    cout<<"\nDays: "<<days;
    return 0;
}


