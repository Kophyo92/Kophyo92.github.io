#include<iostream>
using namespace std;
int main(){
    int a = 3,b = 5;
    bool result;

    result = (a == b);
    cout<<a<<" == "<<b<<" is "<<result<<"\n";
    cout<<a<<" != "<<b<<" is "<<(a != b)<<"\n";
    cout<<a<<" > "<<b<<" is "<<(a > b)<<"\n";
    cout<<a<<" >= "<<b<<" is "<<(a >= b)<<"\n";
    cout<<a<<" < "<<b<<" is "<<(a < b)<<"\n";
    cout<<a<<" <= "<<b<<" is "<<(a <= b)<<"\n";
    return 0;
}
