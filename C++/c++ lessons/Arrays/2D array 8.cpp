#include<iostream>
using namespace std;
int main(){
    float prices[2][3] = {
                        {1200.9,340,600.2},
                        {1100,4900,500.5}
                        };
    /// find max price in each row
    for(int r = 0;r < 2;r++){
        float max_price = prices[r][0];
        for(int c = 1;c < 3;c++){
            if(max_price < prices[r][c])
                max_price = prices[r][c];
        }
        cout<<"\nMaximum price in "<<(r + 1)<<" row is "<<max_price;
    }

    return 0;
}
