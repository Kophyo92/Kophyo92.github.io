#include<iostream>
using namespace std;

int addNumbers(int a,int b = 200,int c = 100){/// dafault should be assign from c to b and omit a,if from a to b and omit c (err)

    return (a + b + c);
}

int main(){
    int n1,n2,n3;
    cout<<"Enter three numbers: ";
    cin>>n1>>n2>>n3;

    cout<<"\n1 arg passed: "<<addNumbers(n1);
    cout<<"\n2 args passed: "<<addNumbers(n1,n2);
    cout<<"\n3 args passed: "<<addNumbers(n1,n2,n3);

    return 0;
}
