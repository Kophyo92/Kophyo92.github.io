#include<iostream>
using namespace std;
int main(){
    int num, sum = 0;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"The sum of digit of "<<num<<" is : ";
    while(num > 0){
        int i = num % 10;
        sum = sum + i;
        num = num / 10;
    }
    cout<<sum;

    return 0;
}
