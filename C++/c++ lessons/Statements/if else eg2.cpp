#include<iostream>
using namespace std;
int main(){
    int mark;
    cout<<"Enter mark: ";
    cin>>mark;

    if(mark < 50){
        cout<<"You fail exam!\n";
    }
    else{
        cout<<"You pass exam!\n";
    }
    /*if(mark < 50){
        cout<<"You fail exam!\n";
    }
    if(mark >= 50){
        cout<<"You pass exam!\n";
    }*/
    return 0;
}
