/* C++ Program to Check whether year is Leap year or not */

#include<iostream>
using namespace std;
 
int main(){
    cout<<"--------Check whether year is Leap year or not---------\n\n";

    int year;
    cout<<"Enter the Year : ";
    cin>>year;

    //check
    if (year%4==0){
        cout<<"'"<<year<<"' is a leap year.";
    }
    else{
        cout<<"This is not a leap year.";
    }

return 0;
}