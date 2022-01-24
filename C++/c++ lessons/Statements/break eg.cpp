#include<iostream>
using namespace std;
int main(){
    int i = 1;
    while(i <= 10){
        i++;
        if(i == 4){
            break;///stop current loop
        }
        ///break can be found in switch,loop
        cout<<"Statement "<<i<<"\n";
    }
    cout<<"\nProgram End....\n";
    return 0;
}
