#include<iostream>
using namespace std;
int main(){
    float bmi;
    cout<<"Enter bmi value:";
    cin>>bmi;

    if(bmi < 18.5)
    cout<<"Underweight\n";///we can omit {}when the scope has one line statement
    else if(bmi >= 18.5 && bmi <= 24.9)
        cout<<"Normal weight";
    else if(bmi >= 25 && bmi <= 29.9)
        cout<<"Overweight";
    else
        cout<<"Obesity";

    return 0;
}
