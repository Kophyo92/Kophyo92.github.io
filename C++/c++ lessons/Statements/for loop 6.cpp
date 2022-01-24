#include<iostream>
using namespace std;
int main(){
    int num = -1;

    cout<<"If you entered zero, program will stop.\n\n";

    while(num != 0){
        cout<<"Enter a number ";
        cin>>num;
        cout<<"\n";
    }

    ///since the condition doesn't depend on control variable (i) in for loop,
    ///we should use while loop that only requires test expression and loop body.

    /*for(int i = 1; (num != 0); ++i){
        cout<<"Enter a number ";
        cin>>num;
        cout<<"\n";
    }*/

    return 0;
}
