#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    ///verify even or odd
    if(num%2 == 0){
        cout<<num<<" is even\n";
    }
    else{
        cout<<num<<" is odd\n";
    }
    cout<<"________Final Statement__________\n";
    return 0;
}
