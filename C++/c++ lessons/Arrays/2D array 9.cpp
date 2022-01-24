#include<iostream>
using namespace std;
int main(){
    float prices[2][3] = {
                        {1200.9,340,600.2},
                        {1100,4900,500.5}
                        };
    /// find max price in each col
    for(int c = 0;c < 3;c++){
        float max_price = prices[0][c];
        for(int r = 1;r < 2;r++){
            if(max_price < prices[r][c])
                max_price = prices[r][c];
        }
        cout<<"\nMaximum price in "<<(c + 1)<<" col is "<<max_price;
    }

    return 0;
}

