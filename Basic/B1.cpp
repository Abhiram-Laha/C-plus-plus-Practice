/* C++ Program to Print Number (Entered by the User) */
#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    if (num>=1){
    cout<<"Your number is : "<<num;
    cout<<"\nIt is Positive Number.";
    }
    else if(num==0){
        cout<<"Your number is : ZERO";
    }
    else{
        cout<<"Your number is : "<<num;
        cout<<"\nIt is Negative Number.";
    }

    return 0;
}