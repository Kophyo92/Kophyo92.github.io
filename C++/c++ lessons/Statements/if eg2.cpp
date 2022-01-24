#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;/// num = 5

   /// if(num%2 == 1){///1 == 1->true
    if(num%2){/// 5%2=1-->work in non-zero expression
        cout<<"You entered odd number!\n";
    }
    return 0;
}
