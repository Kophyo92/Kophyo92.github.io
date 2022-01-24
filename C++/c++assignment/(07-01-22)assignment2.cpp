#include<iostream>
using namespace std;
int main(){
    int len = 4;
    int barCode[len];
    string name[len];
    float price[len];

    /// User Input
    for(int i = 0; i < len; i++){
        cout<<"Enter data for Item "<<(i + 1)<<"\n";
        cout<<"Enter barCode: ";
        cin>>barCode[i];
        cout<<"Enter name: ";
        cin>>name[i];
        cout<<"Enter price: ";
        cin>>price[i];
    }

    /// Display
    cout<<"\n______ All Items _______\n\n";
    cout<<"Code\tItem Name\tPrice\n\n";
    for(int i = 0; i < len; i++){
        cout<<barCode[i]<<"\t";
        cout<<name[i]<<"\t\t";
        cout<<price[i]<<"\n";
    }

    /// Item name which price is greater than 300.
    cout<<"\n______ Items (price > 300) _______\n\n";
    for(int i = 0; i < len; i++){
        if(price[i] > 300)
            cout<<name[i]<<"\t"<<price[i]<<"(ks)\n";
    }

    /// Searched with Item barCode.
    int code;
    int index = -1;
    cout<<"\n______ Please Search with Item barCode _______\n\n";
    cout<<"Enter barCode: ";
    cin>>code;
    for(int i = 0; i < len; i++){
        if(code == barCode[i]){
            index = i;
            break;
        }
    }
    cout<<"\n______ Searched Result _______\n\n";
    if(index == -1)
        cout<<"Code: "<<code<<" does not exist!\n";
    else{
        cout<<"Code: "<<barCode[index]<<"\n";
        cout<<"Name: "<<name[index]<<"\n";
        cout<<"Price: "<<price[index]<<"\n";
    }

    return 0;
}
