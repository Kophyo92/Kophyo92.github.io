#include<iostream>
using namespace std;
int main(){
    int row = 2,col = 3;
    int num[row][col];

    /// user input
    for(int r = 0;r < row;r++){/// row loop
        for(int c = 0; c < col;c++){/// col loop
            cout<<"Enter any number: ";
            cin>>num[r][c];
        }
    }

    /// display
    cout<<"\n____All Elements_____\n";
    for(int r = 0;r < row;r++){
        for(int c = 0;c < col;c++){
            cout<<num[r][c]<<"\t";
        }
        cout<<"\n";
    }

    return 0;
}
