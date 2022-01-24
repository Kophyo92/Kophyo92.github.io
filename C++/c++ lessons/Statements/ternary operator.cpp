#include<iostream>
using namespace std;
int main(){
    int num;
    string result;
    cout<<"Enter a number: ";
    cin>>num;

    result = (num%2 == 0) ? "Even" : "Odd";
    ///same as if else
    /*
    if(num%2 == 0)
        result = "Even";
    else
        result = "Odd";*/
    cout<<result;
    return 0;
}
