#include<iostream>
using namespace std;
class Product{
private:
    int barCode;
    string name;
    float price;
public:
    Product(){/// default or 0 arg constructor

    }
    Product(int code,string name,float price){/// 3 args constructor
        this->barCode = code;
        this->name = name;
        this->price = price;
    }
    void showData(){
        cout<<"\n________Product Detail________\n\n";
        cout<<"BarCode: "<<this->barCode;
        cout<<"\nName: "<<this->name;
        cout<<"\nPrice: "<<this->price;
    }
};
int main(){


    int code;
    string name;
    float price;

    cout<<"Enter bar code: ";
    cin>>code;
    cout<<"Enter product name: ";
    cin>>name;
    cout<<"Enter product price: ";
    cin>>price;

    Product newProd = Product(code,name,price);
    newProd.showData();
    return 0;
}

