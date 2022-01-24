#include<iostream>
using namespace std;
class Animal{
protected:/// protected can only be accessed from its derived class
    string name;
    int leg;

public:
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return this->name;
    }
    void setLeg(int leg){
        this->leg = leg;
    }
    int getLeg(){
        return this->leg;
    }
     void eat(){
        cout<<"\nI can eat!\n";
    }
     void sleep(){
        cout<<"\nI can sleep!\n";
    }
};
class Bird : public Animal{
private :
    int wings;
/// protected: string name;int leg;
public:
    int getWings(){
        return this->wings;
    }
    void initData(string name,int legs,int wings){
        this->wings = wings;
        this->name = name;
        this->leg =legs;
    }
    void fly(){
        cout<<"\nI can fly!\n";
    }
};
class Elephant : public Animal{
private:
    int tail;
public:
    void setTail(int tail){
    this->tail =tail;
    }

    void swim(){
    cout<<"\nI can swim\n";
    }
    void showInfo(){
    cout<<"\n______Elephant Info________\n\n";
    cout<<"Name: "<<getName();
    cout<<"\nNo. of Legs: "<<Animal::getLeg();///mean getleg fun from animal class
    cout<<"\nNo. of tail: "<<this->tail;
    }
};

int main(){
    Bird obj1 = Bird();
    obj1.initData("Parrot",2,2);
    cout<<"\n________Bird Info________\n\n";
    cout<<"Name: "<<obj1.getName();
    cout<<"\nNo. of wings: "<<obj1.getWings();
    cout<<"\nNo. of legs: "<<obj1.getLeg();
    obj1.eat();
    obj1.sleep();
    /// Elephant
    Elephant obj2 = Elephant();
    obj2.setName("Thandar");
    obj2.setLeg(4);
    obj2.setTail(1);
    obj2.showInfo();
    obj2.eat();
    obj2.sleep();
    return 0;
}
