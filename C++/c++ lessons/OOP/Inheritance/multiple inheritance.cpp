#include<iostream>
using namespace std;
class Student{
private:
    int rno;
public:
    void enroll(){
        cout<<"\nI have to enroll any subject...\n";
    }
    void payTuitionFees(int fees){
        cout<<"I have to pay tuition fees - "<<fees<<" ks.\n";
    }
};
class Instructor{
private:
    int salary;
public:
    void setSalary(int salary){
        this->salary =salary;
    }
    void teach(){
        cout<<"\n I have to teach subject...\n";
    }
    void getSalary(){
        cout<<"I get salary - "<<salary<<"\n";
    }
};
class TeachingAssistant : public Instructor,public Student{
public:
    TeachingAssistant(){
        cout<<"\nI am a teaching assistant\n";
    }
};

int main(){
    TeachingAssistant obj;
    obj.enroll();
    obj.payTuitionFees(60000);
    obj.setSalary(50000);
    obj.getSalary();
    obj.teach();
    return 0;
}
