#include<iostream>
using namespace std;
int main(){
    int var1 = 5,var2 = 5;

    int a = var1++ - 2;/// a = 5 - 2 = 3, var1 = 6
    int b = ++var2 - 2;/// b = 6 - 2 = 4, var2 = 6

    cout<<"var1 = "<<var1;
    cout<<"\nvar2 = "<<var2;
    cout<<"\na = "<<a;
    cout<<"\nb = "<<b;
    return 0;
}
