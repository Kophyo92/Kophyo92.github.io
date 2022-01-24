#include<iostream>
using namespace std;
int main(){
    string uName,uPass;
    cout<<"Enter username: ";
    cin>>uName;
    cout<<"Enter password: ";
    cin>>uPass;

    if(uName == "mmit" && uPass == "admin123"){
        cout<<"Login Success";
    }
    else{
        if(uName != "mmit" && uPass != "admin123")
            cout<<"Username and Password do not match";
        else if(uName != "mmit")
            cout<<"Username does not match";
        else if(uPass != "admin123")
            cout<<"Password is incorrect";
    }
    return 0;
}
