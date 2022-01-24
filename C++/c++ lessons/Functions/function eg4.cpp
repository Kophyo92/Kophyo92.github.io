#include<iostream>
using namespace std;
/// Function with arguments and no return value
string brands[5];
int index = 0;

void addBrand(string name){
    brands[index] = name;
    index++;
}
void showData(){
    for(int i = 0; i < 5;i++){
        cout<<brands[i];
        cout<<"\n";
    }
}
int main(){
    /*addBrand("iPhone");
    addBrand("samsung");
    addBrand("vivo");*/

    for(int i = 0;i < 5;i++){
        string str;
        cout<<"Enter brand name: ";
        cin>>str;
        addBrand(str);
    }

    cout<<"\n___Brand Lists____\n";
    showData();

    return 0;
}
