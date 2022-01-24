#include<iostream>
#include<cctype>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){

    cout<<"\n______Function of cctype_______\n";
    cout<<"Is alpha('9'): "<<isalpha('9');
    cout<<"\nIs alpha('A'): "<<isalpha('A');
    cout<<"\nLower case of 'A': "<<(char)tolower('A');/// without (char), shown char se code 97

    cout<<"\n______Function of cmath_______\n";
    cout<<"3 power of 5 is "<<pow(3,5);
    cout<<"\nSquare root of 81: "<<sqrt(81);
    cout<<"\nValue of sin(30): "<<sin(30);
    cout<<"\nValue of log(10): "<<log(10);

    cout<<"\n______Function of iomanip_______\n";
    cout<<"Spring"<<setw(20)<<"Day";
    cout<<"\nLove"<<setw(27)<<"Yourself";
    return 0;
}
