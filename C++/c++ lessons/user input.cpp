#include<iostream>
using namespace std;
int main (){
    int empId;
    int salary;
    string name;
    string address;
    float bonus;

    ///user input
    cout<<"Enter emp no : ";
    cin>>empId;
    cin.ignore();
    cout<<"Enter salary : ";
    cin>>salary;/// cin will ignore text after space and put it to next line
    cin.ignore();/// to separate cin and getline
    cout<<"Enter employee name : ";
    getline(cin,name);/// to get all text after space
    cout<<"Enter address : ";
    getline(cin,address);
    cout<<"Enter bonus : ";
    cin>>bonus;

    cout<<"/n_____Employee Information_______\n\n";
    cout<<"Id: "<<empId;
    cout<<"\nName: "<<name;
    cout<<"\nSalary: "<<salary;
    cout<<"\nName: "<<address;
    cout<<"\nBonus: "<<bonus;


    return 0;
}
