#include<iostream>
using namespace std;
int main(){
    int len = 4;
    int numbers[len] = {13,11,19,2};

    cout<<"\n______All Elements______\n";
    for(int i = 0; i < len; i++)
        cout<<numbers[i]<<"\t";

    /// find largest number & smallest number
    int max_val = numbers[0];
    int min_val = numbers[0];

    for(int i = 1;i < len;i++){
        if(max_val < numbers[i])///max
            max_val = numbers[i];

        if(min_val > numbers[i])///min
            min_val = numbers[i];
    }

    cout<<"\nLargest number: "<<max_val;
    cout<<"\nSmallest number: "<<min_val;
    return 0;
}
