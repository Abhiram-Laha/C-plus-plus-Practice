/* C++ Program to Swap Two Numbers Without Using third variable */
#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter First Number : ";
    cin>>num1;

    cout<<"Enter Second Number : ";
    cin>>num2;

    cout<<"\nNumber before swapping are : \n";
    cout<<"Num1 = "<<num1;
    cout<<"\nNum2 = "<<num2;

    num1=num1+num2;     /* a = 5+6= 11*/
    num2=num1-num2;    /*  b= 11-6 =5 =a*/
    num1=num1-num2;    /* a = 11-5=6 = b */

    cout<<"\n\nNumber after Swapping are : \n";
    cout<<"Num1 = "<<num1;
    cout<<"\nNum2 = "<<num2;

    return 0;
}