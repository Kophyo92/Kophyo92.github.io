#include<iostream>
using namespace std;
int main(){
    int a,b;
    a = 7;
    b = 2;
    cout<<"a = "<<a;
    cout<<"\nb = "<<b;

    a += 10;/// a = a + 10 , a = 7 + 10 = 17;
    cout<<"\nAfter a += 10, a = "<<a;

    b -= a;/// b = b - a = 2 - 17 = -15;
    cout<<"\nAfter b -= a, b = "<<b;

    a = 10;
    a %= 5;
    cout<<"\nAfter a %= 5, a = "<<a;




    return 0;
}
