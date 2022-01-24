#include<iostream>
using namespace std;
int main(){
    int mark[5] = {100,50,60,90,80};

    int a = mark[0];

    ///cout<<a;
    mark[0] = 90;
    cout<<"mark[0] = "<<mark[0];
    cout<<"\nmark[1] = "<<mark[1];
    cout<<"\nmark[2] = "<<mark[2];
    cout<<"\nmark[3] = "<<mark[3];
    cout<<"\nmark[4] = "<<mark[4];

    ///cout<<"\nmark[5] = "<<mark[5];///err but only c++ won't show err but show zero
    int total = mark[0] + mark[1] + mark[2] + mark[3] + mark[4];
    cout<<"\nTotal: "<<total;
    return 0;
}
