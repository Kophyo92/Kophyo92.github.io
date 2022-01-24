#include<iostream>
using namespace std;
class Product{
private:
    string name;
    float price;
/*public:
    int barCode;*/
private:
    int barCode;
public:/// to access private data, need to access from public function
    void setBarCode(int code){
        if(code >= 1000 && code <= 9999)
            barCode = code;
        else
            barCode = 0;/// developer set 0 for invalid
    }

    void showData(){
        cout<<"\nName: "<<name;
        cout<<"\nPrice: "<<price<<" ks.";
        cout<<"\nbarCode: "<<barCode;
    }
};

int main(){

    Product prod1;

    ///prod1.barCode = 1111;/// ok(public)
    prod1.setBarCode(1111);
    /// prod1.name = "Coffee";/// error(private - can't access outside the class)
    /// prod1.price = 1500;/// error(private - can't access outside the class)
    prod1.showData();/// name will be blank and price will be default

    return 0;
}
