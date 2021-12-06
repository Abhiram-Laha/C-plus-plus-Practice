/* C++ Program to Find Quotient and Remainder */

#include<iostream>
using namespace std;

int main(){
    int dividend,divisor,quotient,remainder;
    cout<<"----Program to Find Quotient and Remainder----\n";
    
    cout<<"\nEnter Dividend : ";
    cin>>dividend;
    cout<<"Enter Divisor : ";
    cin>>divisor;
   
    quotient=dividend/divisor;
    remainder=dividend % divisor;

    cout<<"\nThe Quotient is : "<<quotient<<endl;
    cout<<"The Remainder is : "<<remainder;

    return 0;
    
}