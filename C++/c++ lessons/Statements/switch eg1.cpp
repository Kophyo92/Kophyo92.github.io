#include<iostream>
using namespace std;
int main(){
    int dow;
    cout<<"Enter number (1 ~ 7): ";
    cin>>dow;

    ///switch allow only int and char(not string)
    /// switch used to solve simple quiz
    /// can't solve > < , only equal can be solved
    switch(dow){
    case 1:///when value of dow == 1
        cout<<"\nSunday";
        break;/// if found true value switch shows all data true and below values,use break to avoid this
    case 2:
        cout<<"\nMonday";
        break;/// break is to stop the scope and go to next statement (return 0)
    case 3:
        cout<<"\nTuesday";
        break;
    case 4:
        cout<<"\nWednesday";
        break;
    case 5:
        cout<<"\nThursday";
        break;
    case 6:
        cout<<"\nFriday";
        break;
    case 7:
        cout<<"\nSaturday";
        break;
    default:/// like else in if statement,we can omit sometime
        cout<<"\nWrong number of day";
    }



    return 0;
}
