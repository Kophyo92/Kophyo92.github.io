#include<iostream>
using namespace std;
int main(){
    int start_num,end_num;
    int total = 0;
    int count_val = 0;

    cout<<"Enter start number: ";
    cin>>start_num;
    cout<<"Enter end number: ";
    cin>>end_num;

    for(int i = start_num; i <= end_num;i++){
        total = total + i;
        count_val += 1;
    }

    cout<<"Sum: "<<total;
    cout<<"\nTotal numbers: "<<count_val;
    cout<<"\nAverage value: "<<((float)total / count_val);///change float to either total or count_val to get decimal

    return 0;
}
