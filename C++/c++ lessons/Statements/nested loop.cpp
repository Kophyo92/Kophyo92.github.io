
#include<iostream>
using namespace std;
int main(){

    int num1,num2;
    cout<<"Enter start number: ";
    cin>>num1;
    cout<<"Enter end number: ";
    cin>>num2;
    /// nested loop
    for(int i = 1; i <= 12; i++){/// loop for multiply 1~10
        for(int j = num1;j <= num2;j++){/// loop for start~end
           cout<<j<<" * "<<i<<" = "<<(j * i)<<"\t";
        }
        cout<<"\n";
    }

    return 0;
}
