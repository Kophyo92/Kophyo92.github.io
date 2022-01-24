#include<iostream>
using namespace std;
class Person{
protected:
    string name;
    string nrcno;
public:
    void initData(string name,string nrc){
        this->name = name;
        this->nrcno = nrc;
    }
    void showData(){
        cout<<"\nName: "<<name;
        cout<<"\nNrcno: "<<nrcno;
        cout<<"\n";
    }
};
class Student : public Person{
private:
    int rno;
public:
    Student(int rno,string name,string nrc){
        this->rno = rno;
        initData(name,nrc);
    }
    void showData(){
        cout<<"\nRno: "<<rno;
        Person::showData();
    }
    void attend(){
        cout<<"\nI am attending 5th year.\n";
    }
};
class Programmer : public Person{
private:
    string skillsets;
public:
    void setSkillsets(string skill){
        this->skillsets = skill;
    }
    void viewSkillsets(){
        cout<<"Hello, I am a programmer.I am skillful \nin these languages - ";
        cout<<"\n\n"<<skillsets<<"\n";
    }
};


int main(){
    cout<<"\n_______Student_________\n\n";
    Student obj1 = Student(5,"Jeon","12/sakhana(n)123456");
    obj1.attend();
    obj1.showData();

    cout<<"\n\n_______Programmer_________\n\n";

    Programmer obj2 = Programmer();
    obj2.setSkillsets("Html, Javascript,Css, C++, Java, PHP,Python");
    obj2.initData("JK","12/sakhana(n)654321");
    obj2.viewSkillsets();
    obj2.showData();

    return 0;
}
