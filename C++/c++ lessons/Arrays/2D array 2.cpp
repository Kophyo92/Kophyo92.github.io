#include<iostream>
using namespace std;
int main(){
    /// declare
    int numbers[2][3];

    /// assign data
    numbers[0][0] = 900;
    numbers[0][1] = 100;
    numbers[0][2] = 300;
    numbers[1][0] = numbers[0][0] - 200;
    numbers[1][1] = numbers[0][2] + numbers[0][1];
    numbers[1][2] = numbers[0][0]/3;

    /// display
    cout<<"\n_____All Elements_______\n";
    cout<<numbers[0][0]<<"\t";
    cout<<numbers[0][1]<<"\t";
    cout<<numbers[0][2]<<"\n";
    cout<<numbers[1][0]<<"\t";
    cout<<numbers[1][1]<<"\t";
    cout<<numbers[1][2]<<"\n";
    return 0;
}
