#include<iostream>
using namespace std;
int main(){
    int row = 3,col = 4;
    string subjects[col] = {"html","javascript","database","c++"};
    string students[row] = {"aung aung","cherry","yuki"};

    int marks[row][col] = {
                        {
                           100,74,80,100
                        },
                        {
                            88,90,90,56
                        },
                        {
                            90,80,77,100
                        }
                    };

    /// find students who got javascript mark is greater than 80
    cout<<"\n______Students(javascript > 80)______\n\n";
    for(int r = 0; r < row;r++){
        if(marks[r][1] > 80){
               cout<<students[r]<<"("<<marks[r][1]<<" marks)";
               cout<<"\n";
        }
    }
    cout<<"\n______________________________\n";
    /// find max sub & min sub for each student
    for(int r = 0; r < row;r++){/// loop for student

        int max_mark = marks[r][0];
        int min_mark = marks[r][0];
        int max_sub_index = 0;
        int min_sub_index = 0;
        for(int c = 1; c < col;c++){/// loop for subject
            if(max_mark < marks[r][c]){/// max
                max_mark = marks[r][c];
                max_sub_index = c;
            }
            /// min
            if(min_mark > marks[r][c]){
                min_mark = marks[r][c];
                min_sub_index = c;
            }
        }
        cout<<"\n\nName - "<<students[r];
        cout<<"\nMaximum subject: "<<subjects[max_sub_index]<<"("<<max_mark<<" marks)";
        cout<<"\nMinimum subject: "<<subjects[min_sub_index]<<"("<<min_mark<<" marks)";


    }

    cout<<"\n_________________________\n\n";
    /// find mark
    string search_std;
    string search_sub;
    cout<<"Enter student name: ";
    getline(cin,search_std);
    cout<<"Enter subject name: ";
    getline(cin,search_sub);

    /// find index of student name (row)
    int student_index = - 1;
    for(int i = 0;i < row; i++){
        if(search_std == students[i]){
            student_index = i;
            break;
        }
    }
    /// find index of subject name (col)
    int subject_index = -1;
    for(int i = 0;i < col;i++){
        if(search_sub == subjects[i]){
            subject_index = i;
            break;
        }
    }

    /// display mark[row][col]
    cout<<"Mark: "<<marks[student_index][subject_index];

    /// Student who got max mark in database
    cout<<"\n\n_________Student who got max mark in database_______\n\n";
    int max_database = marks[0][2];
    int stu_index = 0;
    for(int r = 0;r < row;r++){
        if(max_database < marks[r][2]){
            max_database = marks[r][2];
            stu_index = r;
        }
    }
    cout<<students[stu_index]<<" got max marks ("<<marks[stu_index][2]<<") in database\n";

    /// avg mark for each student
    cout<<"\n______Average mark for each student_________\n\n";

    for(int r = 0; r < row ; r++){
        int total_mark = 0;
        int number = 0;
        for(int c = 0;c < col;c++){
        total_mark += marks[r][c];
        number += 1;
        }
        cout<<"Average mark for "<<students[r]<<" is "<<(float)total_mark/number<<" marks\n";
    }

    /// no of students who got same mark in c++
    cout<<"\n___no of students who got same mark in c++_____\n\n";

    /*int count = marks[0][3];
    int r = 0;
    int num = 1;
    int i = 1;
    sumAgain: while(i < row){
                if(count == marks[i][3]){
                    num++;
                }
                i++;
            }
    if(num != row){
        count = marks[++r][3];
        i = r + 1;
        if(r < row) {
            goto sumAgain;
        }
    }*/
        int count = 1;

        for(int i = 0;i < row;i++){
            for(int j = 1;j < row;j++){
                if(i != j && count != row){
                    if(marks[i][3] == marks[j][3])
                        count++;
                }
            }
        }

        if(count == 1){
            cout<<"None of these students got same marks in c++\n";
        }else{
            cout<<count<<" students got same mark in c++.\n";
        }

    return 0;

}
