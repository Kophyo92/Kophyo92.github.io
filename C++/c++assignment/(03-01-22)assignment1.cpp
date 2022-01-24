#include<iostream>
using namespace std;
int main(){
    int num,num2,zero,positive,negative;
    zero = 0;
    positive = 0;
    negative = 0;
    cout<<"How many numbers you want to type: ";
    cin>>num;
    cout<<"________Enter your desired numbers_________\n";
    for(int i = 1; i <= num; i++){
        cout<<"Enter any number: ";
        cin>>num2;
        if(num2 == 0)
        zero += 1;

        if(num2 < 0)
        negative += 1;

        if(num2 > 0)
        positive += 1;
    }
    cout<<"_________Final Display___________";
    cout<<"\nNumbers of zero: "<<zero;
    cout<<"\nNumbers of positive number: "<<positive;
    cout<<"\nNumbers of negative number: "<<negative<<"\n";
    return 0;
}
