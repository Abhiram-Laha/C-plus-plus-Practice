/* C++ program to find sum of digits of a number */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"------Find sum of digits of a number-------\n\n";

    int num,sum=0;

    cout<<"Enter a Number : ";
    cin>>num;
    
    int rem;
    while (num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;

    }

    cout<<"\nThe sum of the Digits is : "<<sum;



return 0;
}