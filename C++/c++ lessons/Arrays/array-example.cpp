#include<iostream>
using namespace std;
int main(){
    /// create array
    int len = 3;
    int ids[3];
    string names[3];
    int salaries[3];
    string cities[3];
    /// user input
    for(int i = 0;i < len;i++){
        cout<<"Enter data for employee "<<(i + 1);
        cout<<"\nID: ";
        cin>>ids[i];
        cout<<"Name: ";
        cin>>names[i];
        cout<<"Salary: ";
        cin>>salaries[i];
        cout<<"City: ";
        cin>>cities[i];
        cout<<"\n\n";
    }
    /// display all
    cout<<"empId\tName\tSalary\tCity\n";
    cout<<"----------------------\n";
    for(int i = 0;i <len;i++){
        cout<<ids[i]<<"\t";
        cout<<names[i]<<"\t";
        cout<<salaries[i]<<"\t";
        cout<<cities[i]<<"\n";
    }
    /// display salary greater than 500000
    cout<<"\n_____employee(salary > 500000)______\n";
    for(int i = 0;i < len;i++){
        if(salaries[i] > 500000){
            cout<<names[i]<<"("<<salaries[i]<<" ks.)";
            cout<<"\n";
        }
    }

    /// display employee (city = yangon)
    cout<<"\n______employee(city = yangon)____\n\n";
    for(int i= 0;i < len;i++){
        if(cities[i] == "Yangon"){
            cout<<names[i]<<"\n";
        }
    }
    /// search data with empNo
    int empNo;
    int index = -1;
    cout<<"\nEnter employee no to search: ";
    cin>>empNo;

    for(int i = 0;i < len; i++){
        if(empNo ==ids[i]){
            index = i;
            break;
        }
    }
    if(index == -1)
        cout<<"Employee does not exist!!\n";
    else{
        cout<<"Id: "<<ids[index];
        cout<<"\nName: "<<names[index];
        cout<<"\nSalary: "<<salaries[index];
        cout<<"\ncity: "<<cities[index];
    }
    return 0;
}
