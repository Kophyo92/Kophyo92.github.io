#include<iostream>
using namespace std;
int main(){
    int i = 1;
    do{/// do while allow 1 time even if the exp is false
        cout<<i<<". Hello World\n";
        i += 1;///or i++
    }while(i < 5);

    return 0;
}
