#include<iostream>
using namespace std;
int main(){
    int i,start_num, end_num;
    cout<<"Enter start value: ";
    cin>>start_num;
    cout<<"Enter end value: ";
    cin>>end_num;

    cout<<"\n\nThe numbers divisible by 8 & 5: \n";
    for(i = start_num; i <= end_num; i++){
        if(i%8 == 0 && i%5 == 0)
            cout<<i<<"\n";
    }
    cout<<"\n_____________________________________________\n";
    cout<<"The numbers divisible by only 8: \n";
    for(i = start_num; i <= end_num; i++){
        if(i%8 == 0)
            cout<<i<<"\n";
    }
    cout<<"\n_____________________________________________\n";
    cout<<"The numbers divisible by only 5: \n";
    for(i = start_num; i <= end_num; i++){
        if(i%5 == 0)
            cout<<i<<"\n";
    }
    cout<<"\n_____________________________________________\n";
    cout<<"The numbers not divisible by 8 & 5: \n";
    for(i = start_num; i <= end_num; i++){
        if(i%8 != 0 && i%5 != 0)
            cout<<i<<"\n";
    }

    return 0;
}
