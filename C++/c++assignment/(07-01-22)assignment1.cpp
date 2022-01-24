#include<iostream>
using namespace std;
int main(){
    int len = 5;
    int num[len];
    bool result = false;

    /// User Input
    for(int i = 0; i < len; i++){
        cout<<"Enter any number: ";
        cin>>num[i];
    }

    /// Display
    cout<<"\n_________ Display __________\n\n";
    for(int i = 0; i < len; i++)
        cout<<num[i]<<"\n";

    /// Numbers divisible by 3
    cout<<"\n_________ Numbers divisible by 3! __________\n\n";
    for(int i = 0; i < len ; i++){
        if(num[i]%3 == 0){
            result = true;
            cout<<num[i]<<"\n";
        }
    }
    if(result == 0)
        cout<<"none of them is divisible by 3!\n";

    return 0;
}
