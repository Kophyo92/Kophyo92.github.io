#include<iostream>
using namespace std;
int main (){
    int num1 = 25;
    float num2 = num1;///ok (implicit type cast)

    cout<<"num1 = "<<num1;
    cout<<"\nnum2 = "<<num2;

    float a = 2.4;
    int b = (int)a;/// explicit type cast

    cout<<"\na = "<<a;
    cout<<"\nb = "<<b;

    return 0;
}

