#include<iostream>
using namespace std;
int main(){
    int input_num;
    cout<<"Enter a number:";
    cin>>input_num;
    for(int i = 0;i <= 12;i++){

        int multi = input_num * i;
        cout<<input_num<<"x"<<i<<"="<<multi;
        cout<<"\n";

    }

    /* int num;
       cout<<"Enter a number:";
       cin>>num;

       for(int i = 1;i <= 12;i++){
            cout<<num<<" * "<<i<<" = "<<(i * num);
            cout<<"\n";
    }*/

    return 0;
}
