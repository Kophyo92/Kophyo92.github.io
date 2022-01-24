#include<iostream>
using namespace std;
int main(){
    /// logical operator

    bool result = (3 != 5) && (3 < 5);/// true && true
    cout<<"(3 != 5) && (3 < 5) is "<<result;
    result = (3 == 5) && (3 < 5);/// false && true
    cout<<"\n(3 == 5) && (3 < 5) is "<<result;
    result = (3 == 5) && (3 > 5);/// false && true
    cout<<"\n(3 == 5) && (3 > 5) is "<<result;
    result = (3 != 5) || (3 < 5);/// true ||
    cout<<"\n(3 != 5) || (3 < 5) is "<<result;
    result = (3 != 5) || (3 > 5);/// true ||
    cout<<"\n(3 != 5) || (3 > 5) is "<<result;
    result = (3 == 5) || (3 > 5);/// falae || false
    cout<<"\n(3 == 5) || (3 > 5) is "<<result;
    result = !(3 == 5); /// !(false) = true
    cout<<"\n!(3 == 5) is "<<result;
    result = !((3 != 5) || (3 < 5)); /// !(false) = true
    cout<<"\n!((3 != 5) || (3 < 5)) is "<<result;

    return 0;
}
