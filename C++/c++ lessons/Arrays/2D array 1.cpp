#include<iostream>
using namespace std;
int main(){
    /// dataype varName[row-size][col-size] = {{},{}};//{} are row value input are cols
    int num1[2][3] = {{100,30,70},{20,60,100}};///ok
    int num2[2][3] = {{30,100,80}};/// ok and other are default zero
    int num3[2][3] = {{100,80},{90,70}};/// ok
    int num4[2][3] = {{100,80},{90}};/// ok
    int num5[][3] = {{100,90},{90,50,60},{80}};/// ok
    int num6[2][3] = {};/// ok
    int num7[][3] = {100,54,90,80};///ok...80 will go down to next row,rarely used,con conflict with 1D.
    int num8[2][3] = {100,54,90,80,100};/// ok and 80 and 100 will go to next row rarely used
   /// int num9[2][] = {100,54,90,80,100};/// error....row size can omit but col size must be declared
    /// cout<<num1[1][2];
    return 0;
}
