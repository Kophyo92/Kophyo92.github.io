#include<iostream>
using namespace std;
class Shoe{
private:
    int id;
    string name;
    string brand;
    int price;
    string color;
    string shoeSize;
public:
    /// more than one constructor = constructor overloading
    Shoe(){/// 0 arg consructor
        name = brand = color = shoeSize = "";
        id = price = 0;
    }
    /// 3 args constructor
    Shoe(int id,string name,string brand){
        this->id = id;
        this->name = name;
        this->brand = brand;
    }
    /// 6 args constructor
    Shoe(int id,string name,string brand,int price,string shoeSize,string color){
        this->id = id;
        this->name = name;
        this->brand = brand;
        this->price = price;
        this->shoeSize = shoeSize;
        this->color = color;
    }
    /// initialize data for only default constructor
    void initData(int id,string name,string brand,int price,string shoeSize,string color){
        this->id = id;
        this->name = name;
        this->brand = brand;
        this->price = price;
        this->shoeSize = shoeSize;
        this->color = color;
    }
    void showData(){
        cout<<"\n";
        cout<<id<<"\t"<<name<<"\t";
        cout<<brand<<"\t"<<shoeSize<<"\t";
        cout<<color<<"\t"<<price<<" ks.\n";
    }
};

int main(){

    Shoe shoe1 = Shoe();
    shoe1.initData(1111,"Hiking Boots","Nike",56000,"30","Black");

    Shoe shoe2 = Shoe(2222,"High Heel","Lily",35000,"27","Purple");
    Shoe shoe3 = Shoe(3333,"Leather Sneaker","Adidas");

    cout<<"Code\t Shoe Name\t Brand\t Size\t Color\t Price\n";
    cout<<"---------------------------------------------------\n";

    shoe1.showData();
    shoe2.showData();
    shoe3.showData();

    return 0;
}
