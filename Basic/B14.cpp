/* C++ Program to find Compound Interest */
#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    float principle,time;
    cout<<"------Find Compound Interest-------";

    cout<<"\n\nEnter Principle Amount : ";
    cin>>principle;
    cout<<"Enter Time Tenure (in years) : ";
    cin>>time;
    
    //cal
    float rate=10;
    float amount;

    amount=principle*pow((1+rate/100),time);

    //printing
    cout<<"\nThe Investment Balance after "<<time<<" years is : Rs."<<amount<<endl;
return 0;
}