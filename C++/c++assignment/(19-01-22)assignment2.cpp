#include<iostream>
using namespace std;
class Student{
private:
    int rno;
    string name,course;
public:
    /// getter/setter
    void setRollNo(int _rno){
        this->rno = _rno;
    }

    int getRollNo(){
        return this->rno;
    }

    void setName(string _name){
        this->name = _name;
    }

    string getName(){
        return this->name;
    }

    void setCourse(string _course){
        this->course = _course;
    }

    string getCourse(){
        return this->course;
    }

    /// display
    void showData(){
        cout<<this->rno<<"\t";
        cout<<this->name<<"\t";
        cout<<this->course<<"\n";
    }
    bool findRollNo(int _rno){
        if(this->rno == _rno)
            return true;
        else
            return false;
    }
};

int main(){
    Student stu[5];
    int s_no;
    string s_name ,s_course;
    for(int i = 0;i < 5;i++){
        cout<<"Records for Student "<<(i + 1);
        cout<<"\nEnter roll number: ";
        cin>>s_no;
        cin.ignore();
        cout<<"Enter name: ";
        getline(cin,s_name);
        cout<<"Enter course: ";
        getline(cin,s_course);
        cout<<"\n";

        stu[i].setRollNo(s_no);
        stu[i].setName(s_name);
        stu[i].setCourse(s_course);
    }

    cout<<"\n_______Students' Data________\n";
    cout<<"RollNo.\t Name\t Course\n\n";
    for(int i = 0;i < 5;i++){

        stu[i].showData();
    }
    /// search
    int index = -1;
    int find_num;
    userInput : cout<<"\nEnter roll number to search: ";
    cin>>find_num;
    for(int i = 0;i < 5;i++){
        if(stu[i].findRollNo(find_num)){
            index = i;
            break;
        }
    }
    if(index == -1)
        cout<<"Roll No. "<<find_num<<" is not found!\n";
    else{
        cout<<"\n_______Students' Data________\n";
        cout<<"RollNo.\t Name\t Course\n\n";
        cout<<stu[index].getRollNo()<<"\t";
        cout<<stu[index].getName()<<"\t";
        cout<<stu[index].getCourse()<<"\n";
    }

    char search;
    cout<<"\nDo you want to search again?(y/n): ";
    cin>>search;
    if(search == 'y')
        goto userInput;

    return 0;
}

