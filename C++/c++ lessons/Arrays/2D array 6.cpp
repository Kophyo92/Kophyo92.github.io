#include<iostream>
using namespace std;
int main(){
    int numbers[2][3] = {
                    {100,50,90},
                    {50,40,100}
                    };

    /// find total in each row
    for(int r = 0; r < 2;r++){
        int total = 0;
        for(int c = 0; c < 3;c++){
            total = total + numbers[r][c];
        }
        cout<<"Sum of "<<(r + 1)<<" row is "<<total;
        cout<<"\n";
    }

    return 0;
}

