#include<iostream>
using namespace std;
int main(){

    int num;
    cout<<"If you entered zero, program will stop...\n";
    do{
        cout<<"\nEnter any number: ";
        cin>>num;
        if(num < 0)
            cout<<num<<" is negative number";
        else if (num > 0)///if used else, zero could be entered 1 time because of do while loop
            cout<<num<<" is positive number";
    }while(num != 0);

    return 0;
}
