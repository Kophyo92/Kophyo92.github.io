#include<iostream>
using namespace std;
int main(){
    float bmi;
    cout<<"Enter your bmi value: ";
    cin>>bmi;

    if(bmi < 18.5){
        cout<<"Underweight\n";
    }
    else{/// for bmi >=18.5
        if(bmi >= 18.5 && bmi <= 24.9){
            cout<<"Normal weight\n";
        }
        else{/// for bmi >=25
            if(bmi >= 25 && bmi <= 29.9){
                cout<<"Overweight\n";
            }
            else{///for bmi > 30
                cout<<"Obesity\n";
            }
        }
    }


    return 0;
}
