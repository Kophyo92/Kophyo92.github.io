#include<iostream>
using namespace std;

int main(){

    cout<<"Size of int: "<<sizeof(int)<<"bytes";
    cout<<"\nSize of short int: "<<sizeof(short int)<<"bytes";
    cout<<"\nSize of long int: "<<sizeof(long int)<<"bytes"<<endl; /* endl is used for only c++ to go next line */
    cout<<"Size of float: "<<sizeof(float)<<"bytes";
    cout<<"\nSize of double: "<<sizeof(double)<<"bytes";
    cout<<"\nSize of boolean: "<<sizeof(bool)<<"bytes";
    cout<<"\nSize of character: "<<sizeof(char)<<"bytes";
    cout<<"\nSize of string: "<<sizeof(string)<<"bytes\n";
    return 0;
}
