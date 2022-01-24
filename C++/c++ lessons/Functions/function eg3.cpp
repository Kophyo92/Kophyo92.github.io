#include<iostream>
using namespace std;
/// Function with no arguments and a return value
int salaries[5] = {1000000,700000,900000,300000,1500000};

/// return-data-type funName(){} (Function syntax)
int findMaxSalary(){
    int max_sal = salaries[0];
    for(int i = 1;i < 5;i++){
        if(max_sal , salaries[i])
            max_sal = salaries[i];
    }
    return max_sal; /// datatype should be same with fun's return datatype
}

int findTotalSalary(){
    int total = 0;
    for(int i = 0;i < 4;i++)
        total += salaries[i];

    return total;/// when found return, this fun end and return to caller
}
int main(){
    /// void fun can not be add to variable
    /// return-type fun can be added to var
    int maximum_sal = findMaxSalary();/// maximum_sal = 1500000
    cout<<"Maximum salary is "<<maximum_sal<<" ks.";
    cout<<"\nTotal Salary is "<<findTotalSalary()<<" ks.";

    return 0;
}
