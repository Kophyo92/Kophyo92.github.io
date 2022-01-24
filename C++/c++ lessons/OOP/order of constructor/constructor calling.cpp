#include<iostream>
using namespace std;
class Based{
private:
    int x;
    int y;
public:
    Based(){
        cout<<"\nBased's default constructor\n";
    }
    Based(int x,int y){
        cout<<"\nBased's argument constructor\n";
        this->x = x;
        this->y = y;
    }
};
class Derived : public Based{
private:
    int z;
public:
    Derived(){
        cout<<"\nDeived's default constructor\n";
    }
    Derived(int a,int b,int c) : Based(a,b){/// : Based is for direct calling argument const from based, by skipping default const from based class
        cout<<"\nDeived's argument constructor\n";
        this->z = c;
    }
};

int main(){
    Derived obj1;/// default constructor
    cout<<"\n_____Another Object_____\n";
    Derived obj2(100,200,300);/// argument constructor
    return 0;
}
