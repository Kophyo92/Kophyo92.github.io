#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;/// num=6

    if(num >= 0 && num <= 9){///6>=0 && 6<=9->true
        cout<<"You entered one digit!\n";
    }

    return 0;
}
