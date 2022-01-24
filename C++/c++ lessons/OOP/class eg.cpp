#include<iostream>
using namespace std;
class Fruit{
    /// can announce ...public: int price;
    ///                 public: string name;
    /// only in c++,announcing one time will be the same access modifier to other var
    /// if user not assign access modifier, private: will be default

///data
public:/// access modifier
    int price;
    string name;

///methods
    void setData(string na,int price){
        name = na;
        /// price = price;...class var cannot be same with formal parameter,compiler will confuse so use this.price
       this->price = price;/// this-> is pointer var,this. is not allowed in c++
    }
    void showData(){
        cout<<"\nName: "<<name;
        cout<<"\nPrice: "<<price;
        cout<<"\n";
    }
};
int main(){
    /// create Object;
    /// Fruit fruit1,fruit2,fruit3;-----ok
    ///Fruit fruit4 = fruit();------ok
    Fruit fruit1;
    Fruit fruit2;

    /// access object's data for public: access modifier
    fruit1.name = "Orange";
    fruit1.price = 300;

    cout<<"Name: "<<fruit1.name;
    cout<<"\nPrice: "<<fruit1.price<<" ks.\n";

    fruit2.setData("Banana",500);
    fruit2.showData();

    return 0;
}
