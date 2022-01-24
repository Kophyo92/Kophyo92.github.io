#include<iostream>
using namespace std;
int main (){
    int s_num,e_num;
    int total = 0, count_val = 0;
    cout<<"Enter start number: ";
    cin>>s_num;
    cout<<"Enter end number: ";
    cin>>e_num;
    ///1~10
    while(s_num <= e_num){
        total = total + s_num;
        s_num++;
        count_val += 1;
    }
    cout<<"Total: "<<total;
    cout<<"\nNo of number: "<<count_val;


    return 0;
}
