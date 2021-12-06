/* C++ Program to raise any number X to power N */
#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    int num,pow;
    cout<<"------Program to raise any number to power------\n\n";

    //intake
    cout<<"Enter the Number : ";
    cin>>num;
    cout<<"Enter the Power : ";
    cin>>pow;

    double value;

    value=(std::pow(5,2));

    cout<<"\nThe Power of the Number "<<num<<'^'<<pow<<" is : "<<value;
return 0;
}