
#include<iostream>
using namespace std;
class Employee{
private:
    int empNo,salary,proSalary;
    string ranks,department,name;
public:
    /// getter/setter
    void setEmpNo(int no){
        this->empNo = no;
    }

    int getEmpNo(){
        return this->empNo;
    }

    void setName(string _name){
        this->name = _name;
    }

    string getName(){
        return this->name;
    }

    void setSalary(int _salary){
        this->salary = _salary;
    }

    int getSalary(){
        return this->salary;
    }
    void setPromoteSalary(int pro_salary){
        this->proSalary = salary + pro_salary;
    }

    int getPromoteSalary(){
        return this->proSalary;
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
        cout<<this->name<<"\t";
        cout<<this->ranks<<"\t";
        cout<<this->department<<"\t\t";
        cout<<this->salary<<"\t";
        cout<<this->proSalary<<"\n";
    }
};

int main(){
    Employee emp[4];
    int no,income;
    string position,depmnt,name;
    for(int i = 0;i < 4;i++){
        cout<<"Records for Employee "<<(i + 1);
        cout<<"\nEnter emp number: ";
        cin>>no;
        cin.ignore();
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter rank: ";
        getline(cin,position);
        cout<<"Enter department: ";
        getline(cin,depmnt);
        cout<<"Enter salary: ";
        cin>>income;
        cout<<"\n";

        emp[i].setEmpNo(no);
        emp[i].setName(name);
        emp[i].setRanks(position);
        emp[i].setDepartment(depmnt);
        emp[i].setSalary(income);
    }

    cout<<"\n_______Employee Data________\n\n";

    for(int i = 0;i < 4;i++){

        cout<<emp[i].getName()<<"=>"<<emp[i].getSalary()<<"\n";
    }
    int promoteSalary;
    for(int i = 0;i < 4;i++){
        cout<<"\nEnter Promoted Salary Amount for emp "<<(i + 1)<<": ";
        cin>>promoteSalary;
        emp[i].setPromoteSalary(promoteSalary);
    }
    cout<<"\n_______All Employee Data________\n";
    cout<<"empNo\t Name\t Rank\t Department\t Salary\t PromotedSalary\n\n";
    for(int i = 0;i < 4;i++){

        emp[i].showData();
    }
    return 0;
}
