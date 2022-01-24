#include<iostream>
using namespace std;
int main(){
    int progm,eng,math;
    cout<<"Enter Mark for Programming: ";
    cin>>progm;
    cout<<"Enter Mark for English: ";
    cin>>eng;
    cout<<"Enter Mark for Math: ";
    cin>>math;

    int max = progm;
    if(eng > max)
        max = eng;

    if(math > max)
        max = math;

    cout<<"______________Mark Details_____________";

    if(max == progm && max == eng && max == math)
        cout<<"\nAll subjects got same mark: "<<max;
    else if ((max == progm && max == eng) || (max == progm && max == math) || (max == eng && max == math)){
        if(max == progm && max == eng)
           cout<<"\nProgramming and English got the same maximum mark: "<<max;
        else if(max == progm && max == math)
           cout<<"\nProgramming and Math got the same maximum mark: "<<max;
        else
           cout<<"\nEnglish and Math got the same maximum mark: "<<max;
    }
    else{
        if(max == progm)
        cout<<"\nSubject that got maximum mark is Programming with mark: "<<max;
        if(max == eng)
        cout<<"\nSubject that got maximum mark is English with mark: "<<max;
        if(max == math)
        cout<<"\nSubject that got maximum mark is Math with mark: "<<max;
    }



    int min = progm;
    if(eng < min)
        min = eng;

    if(math < min)
        min = math;

    if(min == progm && min == eng && min == math && min != max)
        cout<<"\nAll subjects got same mark: "<<min;
    else if((min == progm && min == eng && min != max) || (min == progm && min == math && min != max) || (min == eng && min == math && min != max)){
        if(min == progm && min == eng)
           cout<<"\nProgramming and English got the same minimum mark: "<<min;
        else if(min == progm && min == math)
           cout<<"\nProgramming and Math got the same minimum mark: "<<min;
        else
           cout<<"\nEnglish and Math got the same minimum mark: "<<min;
    }
    else{
        if(min == progm && min != max)
        cout<<"\nSubject that got minimum mark is Programming with mark: "<<min;
        if(min == eng && min != max)
        cout<<"\nSubject that got minimum mark is English with mark: "<<min;
        if(min == math && min != max)
        cout<<"\nSubject that got minimum mark is Math with mark: "<<min;
    }

    int total = progm + eng + math;
    cout<<"\nTotal Mark: "<<total;

    float avg = (float)(progm + eng + math) / 3;
    cout<<"\nAverage Mark: "<<avg;

    int dist;
    if(progm >= 80 && eng >= 80 && math >= 80){
        cout<<"\nDistinction Subjects are Programming, English and Math.";
    }
    else if((progm >= 80 && eng >= 80) || (progm >= 80 && math >= 80) || (eng >= 80 && math >= 80)){
        if(progm >= 80 && eng >= 80)
            cout<<"\nDistinction Subjects are Programming and English.";
        else if (progm >= 80 && math >= 80)
            cout<<"\nDistinction Subjects are Programming and Math.";
        else
            cout<<"\nDistinction Subjects are English and Math.";
    }
    else{
        if(progm >= 80)
            cout<<"\nDistinction Subject is Programming.";
        if(eng >= 80)
            cout<<"\nDistinction Subject is English.";
        if(math >= 80)
            cout<<"\nDistinction Subject is Math.";
    }

    return 0;
}
