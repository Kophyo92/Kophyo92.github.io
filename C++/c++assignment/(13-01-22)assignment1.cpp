#include<iostream>
using namespace std;

int num[3];

int findLargestNumber(){
    int largestNum = num[0];
    if(largestNum < num[1])
        largestNum = num[1];
    if(largestNum < num[2])
        largestNum = num[2];
    return largestNum;
}
int findSmallestNumber(){
    int smallestNum = num[0];
    if(smallestNum > num[1])
        smallestNum = num[1];
    if(smallestNum > num[2])
        smallestNum = num[2];
    return smallestNum;
}
bool checkLogin(string user,string pass){

    return (user == "mmit" && pass == "admin123") ? true : false;
}

int main(){
    for(int i = 0;i < 3;i++){
        cout<<"Enter any number: ";
        cin>>num[i];
    }
    cout<<"\nLargest Number is: "<<findLargestNumber();
    cout<<"\nSmallest Number is: "<<findSmallestNumber();
    cout<<"\n";

    string userName,password;
    userInput: cout<<"\nEnter user name: ";
    cin>>userName;
    cout<<"Enter password: ";
    cin>>password;
    if(checkLogin(userName,password) == 1){
        cout<<"\nUser is valid!\n";
        return 0;
    }

    else
        cout<<"\nUser is invalid!\n";

    char tryAgain;
    cout<<"\nDo you want to try again?";
    cout<<"\nTo re-enter, press 'y',otherwise press'n': ";
    cin>>tryAgain;
    if(tryAgain == 'y')
        goto userInput;

    return 0;
}
