#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num%3 == 0 || num%5 == 0){
        if(num%3 == 0){
            if(num%5 == 0){
                cout<<num<<" is divisible with both 3 and 5";
            }
            else{
                cout<<num<<" is divisible with 3";
            }
        }
        else{
            cout<<num<<" is divisible with 5";
        }
    }
    else{
        cout<<num<<" is not divisible with 5 and 3\n";
    }

    return 0;
}
