#include<iostream>
using namespace std;
int main(){
    /* goto can go to any statement we want within same function(),but need to assign label to statement we want to go */
    ///goto can not be used in java
    string uname,upass;
    ///labelname : cout
    ///space after labelname is optional
    tryAgain : cout<<"Enter user name: ";
    cin>>uname;
    cout<<"Enter password: ";
    cin>>upass;

    if(uname != "mmit" || upass != "admin"){
        ///goto labelname;
        goto tryAgain;
    }
    cout<<"Login Success...\n";
    return 0;
}
