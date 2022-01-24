#include<iostream>
using namespace std;
class Product{
private:
    int barCode;
    string name;
public:
    bool setBarCode(int code){
        if(code >= 1000 && code <= 9999){
            this->barCode = code;
            return true;
        }
        else
            return false;
    }
    int getBarCode(){
        return this->barCode;
    }
    void setName(string name){
        this->name = name;
    }
    string getName(){
        return this->name;
    }
};

int main(){
    int pCode;
    string pName;

    Product prod1 = Product();

    cout<<"\nEnter bar code: ";
    cin>>pCode;

    bool result = prod1.setBarCode(pCode);

    while(!result){
        cout<<"\nEnter valid bar code: ";
        cin>>pCode;

        result = prod1.setBarCode(pCode);
    }

    cout<<"\nEnter product name: ";
    cin>>pName;

    prod1.setName(pName);

    cout<<"Barcode: "<<prod1.getBarCode();
    cout<<"\nName: "<<prod1.getName();
    return 0;
}
