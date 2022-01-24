#include<iostream>
using namespace std;
class Based{
private:
    int x = 9;
protected:
    int y = 20;
public:
    int z = 22;
};
class PublicDerived : public Based{
/// protected : int y = 22;
/// public: int z = 22
public:
    void show(){
        cout<<"\ny = "<<y;
        cout<<"\nz = "<<z;
    }
};
class ProtectedDerived : protected Based{
/// protected : int y = 20;
/// protected : int z = 22
public:
    void show(){
        cout<<"\ny= "<<y;
        cout<<"\nz = "<<z;
    }
};
class PrivateDerived : private Based{
/// private : int y = 20
/// private : int z = 22
public:
    void show(){
    cout<<"\ny= "<<y;
    cout<<"\nz = "<<z;
    }
};
int main(){
    PublicDerived obj1;
    ///cout<<"y = "<<obj1.y;/// can not access from outside the class
    ///cout<<"z = "<<obj1.z;///ok
    ///obj1.show();///ok

    ProtectedDerived obj2;
    ///cout<<"z = "<<obj2.z;/// cannot access,access mode change to protected
    ///obj2.show();/// ok
    PrivateDerived obj3;
    obj3.show();/// ok
    return 0;
}
