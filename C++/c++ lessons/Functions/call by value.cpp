#include<iostream>
using namespace std;
void changeValue(int val){/// val is formal parameter
    val = val + 20;
    cout<<"\nValue inside function: "<<val;
    cout<<"\n";
}
/// fun call by val has no effect on actual paraeter when formal parameter val changes
/// as they have different addresses

int main(){
    int num = 10;
    cout<<"\nBefore calling function, num = "<<num;
    changeValue(num);/// num is actual parameter
    cout<<"\nAfter calling function, num = "<<num;

    return 0;
}
