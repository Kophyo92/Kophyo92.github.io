#include<iostream>
using namespace std;

// global variable
int a = 10;
void display(){
    //local variable
    int a = 20;
    cout<<"\nvalue of a inside fun: "<<a;

}
void displayAnother(int a){// int a is parameter
    cout<<"\nvalue of a inside fun parameter: "<<a;
}
int main(){

    cout<<"Value of a: "<<a;
    display();// fun calling statement
    displayAnother(30);
    return 0;
}
