#include<iostream>
using namespace std;
class Employee{
private:
    int empNo,salary;
    string ranks,department;
public:
    /// getter/setter
    void setEmpNo(int no){
        this->empNo = no;
    }

    int getEmpNo(){
        return this->empNo;
    }

    void setSalary(int _salary){
        this->salary = _salary;
    }

    int getSalary(){
        return this->salary;
    }

    void setRanks(string _ranks){
        this->ranks = _ranks;
    }

    string getRanks(){
        return this->ranks;
    }

    void setDepartment(string _department){
        this->department = _department;
    }

    string getDepartment(){
        return this->department;
    }

    /// display
    void showData(){
        cout<<this->empNo<<"\t";
        cout<<this->ranks<<"\t";
        cout<<this->department<<"\t\t";
        cout<<this->salary<<"\n";
    }
};

int main(){
    Employee emp[5];
    int no,income;
    string position,depmnt;
    for(int i = 0;i < 5;i++){
        cout<<"Records for Employee "<<(i + 1);
        cout<<"\nEnter emp number: ";
        cin>>no;
        cin.ignore();
        cout<<"Enter rank: ";
        getline(cin,position);
        cout<<"Enter department: ";
        getline(cin,depmnt);
        cout<<"Enter salary: ";
        cin>>income;
        cout<<"\n";

        emp[i].setEmpNo(no);
        emp[i].setRanks(position);
        emp[i].setDepartment(depmnt);
        emp[i].setSalary(income);
    }

    cout<<"\n_______All Employee Data________\n";
    cout<<"empNo\t Rank\t Department\t Salary\n\n";
    for(int i = 0;i < 5;i++){

        emp[i].showData();
    }

    return 0;
}
