#include<iostream>
using namespace std;
int main(){

    int i = 0;///create initializing value for while loop
    while(i < 5){///infinite loop
        cout<<(i+1)<<". Hello World";
        cout<<endl;
        i++;///create update expression for while loop to prevent being infinite loop
    }

    return 0;
}
