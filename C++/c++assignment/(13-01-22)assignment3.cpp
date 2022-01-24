#include<iostream>
using namespace std;
int numItem;

void initializeItemData(int barCode[],string name[],int price[]){
    for(int i = 0;i < numItem;i++){
        cout<<"\nEnter barCode for Item "<<(i + 1)<<": ";
        cin>>barCode[i];
        cout<<"Enter Name for Item "<<(i + 1)<<": ";
        cin>>name[i];
        cout<<"Enter Price for Item "<<(i + 1)<<": ";
        cin>>price[i];
    }
}

void displayItemData(int barCode[],string name[],int price[]){
    cout<<"\n______All Items Information________\n";
    cout<<"\nbarCode\tName\tPrice\n\n";
    for(int i = 0;i < numItem;i++){
        cout<<barCode[i]<<"\t";
        cout<<name[i]<<"\t";
        cout<<price[i]<<"\n";
    }
}

void searchItemByCode(int code,int barCode[],string name[],int price[]){
    int index = -1;
    for(int i = 0;i < numItem;i++){
        if(code == barCode[i])
            index = i;
            break;
    }
    cout<<"\n_____Searched Item Information_______\n";
    if(index == -1)
        cout<<"\nbarCode: "<<code<<" does not exist!\n";
    else{
        cout<<"\nbarCode\tName\tPrice\n\n";
        cout<<barCode[index]<<"\t";
        cout<<name[index]<<"\t";
        cout<<price[index]<<"\n";
    }
}

int main(){
    cout<<"Enter numbers of items: ";
    cin>>numItem;

    string name[numItem];
    int barCode[numItem],price[numItem];

    initializeItemData(barCode,name,price);

    displayItemData(barCode,name,price);

    int code;
    userInput: cout<<"\nEnter barCode to search: ";
    cin>>code;
    searchItemByCode(code,barCode,name,price);

    char search;
    cout<<"\nDo you want to search again?";
    cout<<"\nIf continue, press 'y',otherwise press'n': ";
    cin>>search;
    if(search == 'y')
        goto userInput;

    return 0;
}
