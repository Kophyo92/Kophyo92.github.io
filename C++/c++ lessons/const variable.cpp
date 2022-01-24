#include<iostream>
using namespace std;
int main(){
    const int LENGTH = 10; //const can not be reassigned
    const int WIDTH = 5; // writing const name in uppercase is a good practice for only const variable
    const string NAME = "Rectangle";
    int area;
    area = LENGTH * WIDTH;
    cout<<"value of length: "<<LENGTH;
    cout<<"\nvalue of width: "<<WIDTH;
    cout<<"\nvalue of name: "<<NAME;
    cout<<"\nvalue of area: "<<area;

    return 0;
}
