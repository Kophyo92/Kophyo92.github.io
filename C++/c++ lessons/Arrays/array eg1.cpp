#include<iostream>
using namespace std;
int main(){
    /// datatype var-name[size];///declare
    /// datatype var-name[size] = {val,val};///initializing
    /// value cannot exceed size but can be less

    int mark[5] = {90,50,53,70,80};
    int mark2[5] = {};///ok to be values left empty
    int mark3[5] = {90,50,30};///ok to be values less than size
   /// int mark4[5] = {90,60,54,55,70,90};///error

    /// we can do without pre-assigning data size, compiler will automatically assign the size based on values
    int mark4[] = {90,50,49,30,100,20};

    int rno = 10;

    cout<<sizeof(rno)<<" bytes\n";
    cout<<sizeof(mark4)<<" bytes";

    cout<<"\nNo. of items in mark4: "<<(sizeof(mark4) / sizeof(int));

    /// var-name[index];///how to access array element
    ///cout<<mark[2];
    return 0;
}
