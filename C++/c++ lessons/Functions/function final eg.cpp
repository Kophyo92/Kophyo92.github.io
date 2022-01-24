#include<iostream>
using namespace std;
string names[3];
int rollnumbers[3];

void initData(){
    cout<<"\n______Data Entry____\n";
    for(int i = 0;i < 3;i++){
        cout<<"\n\nEnter data for student "<<(i + 1)<<":";
        cout<<"\nName: ";
        cin>>names[i];
        cout<<"Roll number: ";
        cin>>rollnumbers[i];
    }
}
void showData(){
    cout<<"\n\n_________Student List_________\n";
    cout<<"Rno \t Name \n";
    for(int i = 0;i < 3;i++){
        cout<<rollnumbers[i]<<"\t"<<names[i];
        cout<<"\n";
    }
}
int searchStudent(int rno){
    int index = -1;
    for(int i = 0; i < 3;i++){
        if(rno == rollnumbers[i]){
            index = i;
            break;
        }
    }
    return index;
}
void searchStudent(string name){
    int index = -1;
    for(int i = 0; i < 3;i++){
        if(name == names[i]){
            cout<<"\nRno: "<<rollnumbers[i];
            cout<<"\nName: "<<names[i];
            index = i;
        }
    }

    if(index == -1){
        cout<<name<<" does not exist!";
    }

}
int main(){
    int choose;
   userInput: cout<<"1. data entry";
    cout<<"\n2. display data";
    cout<<"\n3. search with rno";
    cout<<"\n4. search with name";
    cout<<"\nChoose 1,2,3 or 4 : ";
    cin>>choose;

    if(choose == 1){/// data entry
        initData();
    }
    else if(choose == 2){/// display data
        showData();
    }
    else if(choose == 3){/// search with rno
        int rno;
        cout<<"Enter roll number to search: ";
        cin>>rno;
        int result = searchStudent(rno);
        if( result == -1)
            cout<<rno<<" does not exist!";
        else{
            cout<<"Rollnumber: "<<rollnumbers[result];
            cout<<"\nName: "<<names[result];
        }
    }
    else if(choose == 4){/// search with name
        string stdName;
        cout<<"Enter name to search: ";
        cin>>stdName;
        searchStudent(stdName);
    }
    else
        cout<<"\nInvalid number\n";

    char ch;
    cout<<"\n\nDo you want to continue?";
    cout<<"\nIf continue, press 'y': ";
    cin>>ch;
    if(ch == 'y')
        goto userInput;


    return 0;
}
