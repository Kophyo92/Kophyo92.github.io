#include<iostream>
using namespace std;
void editValue(int *val){/// * for pointer var
    *val = *val + 20;
    cout<<"\nValue inside function: "<<(*val);
    cout<<"\n";
}
/// fun call by ref affect actual paraeter when formal parameter val changes
/// as they share same address
int main(){
    int num = 10;
    cout<<"\nBefore calling function, num = "<<num;
    editValue(&num);/// & for reference var
    cout<<"\nAfter calling function, num = "<<num;

    return 0;
}

