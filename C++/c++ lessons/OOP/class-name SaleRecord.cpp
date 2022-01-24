#include<iostream>
using namespace std;

class SaleRecord{
public:
    string itemName;
    double unitPrice;
    int saleQty;

    void addSaleRecord(string item,double price,int qty){
        itemName = item;
        saleQty = qty;
        unitPrice = price;
    }
    double getSubTotal(){
        return unitPrice * saleQty;
    }
    void displayInfo(){
        cout<<"\n";
        cout<<itemName<<"\t";
        cout<<unitPrice<<" ks. \t";
        cout<<saleQty<<"\t";
        cout<<getSubTotal()<<" ks.\n";
    }
};

int main(){
    /// create object
    SaleRecord record1,record2,record3;

    /// data initialize
    record1.addSaleRecord("Soju",6900,4);
    record2.addSaleRecord("Burger",4200,2);
    record3.addSaleRecord("Pizza",16000,1);

    /// data display
    cout<<"\n______SaleRecord List______\n\n";
    cout<<"Name\t Unit Price\t Qty\t Sub Total\n";
    cout<<"-----------------------------------------";
    record1.displayInfo();
    record2.displayInfo();
    record3.displayInfo();

    return 0;
}
