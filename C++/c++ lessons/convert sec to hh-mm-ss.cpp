#include<iostream>
using namespace std;
int main(){
    int totalSec;
    cout<<"Enter total second: ";
    cin>>totalSec;

    int hr = totalSec/3600;
    int mins = (totalSec%3600)/60;
    int sec = (totalSec%3600)%60;

    cout<<"Hours: "<<hr;
    cout<<"\nMinutes: "<<mins;
    cout<<"\nSecond: "<<sec;
    return 0;
}
