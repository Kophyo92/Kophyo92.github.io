#include<iostream>
using namespace std;
int main(){
    int i = 1;
    while(i <= 8){
        i++;
        if(i == 4){
            continue;///skip the statements under 'continue'
                    /// and resume the loop
        }
        ///continue can only be found in loop
        cout<<"Statement "<<i<<"\n";
    }
    cout<<"\nProgram End....\n";
    return 0;
}

