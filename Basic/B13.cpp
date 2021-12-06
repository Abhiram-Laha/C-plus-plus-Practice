/* C++ Program to find Square Root of a number */
#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    float num;
    cout<<"------Find Square Root of a Number-------\n";

    cout<<"\nEnter a Number : ";
    cin>>num;

    float sq;
    sq=sqrt(num);

    cout<<"\nThe Square Root of "<<num<<" is : "<<sq;
return 0;
}