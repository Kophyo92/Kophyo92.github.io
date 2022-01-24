#include<iostream>
using namespace std;
int main (){
    int a = 20,b = 10,c = 15,d = 5;
    int e;
    e = (a + b) * c / d;///(30) * 15 / 5 = (150 / 5)
    cout<<"(a + b) * c / d is "<<e;
    e = ((a + b) * c) / d;///((30)*15) / 5
    cout<<"\n((a + b) * c) / d is "<<e;
    e = (a + b) * (c / d);///30 * (3) = 90
    cout<<"\n(a + b) * (c / d) is "<<e;
    e = a + (b * c) / d;///20 + 150/5 = 20 + (150/5)
    cout<<"\na + (b * c) / d is "<<e;


    return 0;
}
