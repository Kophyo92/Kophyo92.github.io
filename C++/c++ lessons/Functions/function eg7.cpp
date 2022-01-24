#include<iostream>
using namespace std;

void display(char ch = '*',int no = 3){/// default val in function
    for(int i = 0;i < no;i++){
        cout<<ch<<" ";
    }
    cout<<"\n";
}
int main(){

    cout<<"No Argument passed: \n";
    display();/// is ok not giving parameter cause fun has default
    cout<<"1 Argument passed: \n";
    display('$');/// is ok to omit number
    cout<<"2 Arguments passed: \n";
    display('#', 10);/// is ok all arguments placed
    return 0;
}
