#include<iostream>
using namespace std;
int main(){

    string brands[4] = {"samsung","iphone","vivo","oppo"};
    string search_name;
    bool found = false;

    cout<<"Enter brand to search: ";
    cin>>search_name;

    for(int i = 0;i < 4;i++){
        if(search_name == brands[i]){
            found = true;
            break;///if found stop the loop to get better performance
        }
    }
    if(found == 1) /// 1 = true
        cout<<search_name<<" is found!";
    else /// 0 = false
        cout<<search_name<<" is not found!";

    return 0;
}
