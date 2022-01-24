#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"If you typed 'q', program will stop...\n";
    do
    {
        cout<<"\nEnter any a character : ";
        cin>>ch;

        if(ch == 'q'){
            cout<<"Program terminate...\n";
        }
        else if(ch >= '0' && ch <= '9'){/// a is 65 in se code, so '65' >= '0' && '65' <= '9'
            cout<<ch<<" is digit";
        }
        else{
            cout<<ch<<" is not digit";
        }
    }while(ch != 'q');
    return 0;
}
