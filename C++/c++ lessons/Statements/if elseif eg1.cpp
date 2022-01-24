
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    /// placing incorrectly can lead to incorrect answer
    if(num%5 == 0 && num%3 ==0){
        cout<<num<<" is divisible with both 5 and 3";
    }
    else if(num%3 == 0){
        cout<<num<<" is divisible with 3";
    }
    else if(num%5 == 0){
        cout<<num<<" is divisible with 5";
    }
    else{
        cout<<num<<" is not divisible with 5 and 3";
    }

    return 0;
}
