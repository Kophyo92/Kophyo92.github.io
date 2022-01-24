#include<iostream>
using namespace std;
int main(){
    float num;
    cout<<"Enter any non-zero number: ";
    cin>>num;

    if(num < 0)
        cout<<"The number is negative";
    else if(num > 0)
        cout<<"The number is positive";
    return 0;
}
