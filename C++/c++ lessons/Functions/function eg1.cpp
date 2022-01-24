#include<iostream>
using namespace std;
string cities[3];
/// fun with no argument and no return type
void initData(){

    for(int i = 0;i < 3;i++){
        cout<<"Enter city name: ";
        getline(cin,cities[i]);
    }
}

void showData(){

    cout<<"_______All Cities_________\n\n";
    for(int i = 0;i < 3;i++)
        cout<<cities[i]<<"\n";
}

int main(){

    cout<<"\n_____Function Calling_____\n";
    initData();
    showData();

    return 0;
}
