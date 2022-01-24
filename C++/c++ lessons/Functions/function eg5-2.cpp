#include<iostream>
using namespace std;
/// Function with arguments and a return value

bool checkLogin(string,string);/// fun declaration to preinform the compiler that it is fun and will be defined after main fun

int main(){

    string email,password;
    cout<<"Enter email: ";
    cin>>email;
    cout<<"Enter password: ";
    cin>>password;

    /// or bool result = checkLogin(email,password);
    if(checkLogin(email,password) == 1){
        cout<<"\nLogin Success....\n";
    }
    else{
        cout<<"\nLogin Fail....\n";
    }
    return 0;
}

bool checkLogin(string email,string pass){
    /*if(email == "mmit@gmail.com" && pass == "123")
        return true;
    else
        return false;*/
    return (email == "mmit@gmail.com" && pass == "123") ? true : false;
}
