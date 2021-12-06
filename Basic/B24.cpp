/* C++ Program to Reverse a Number */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"------Reverse a Number------\n\n";

    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    
    int rem;
    int rev=0;

    while (num > 0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    cout<<"\nThe Reverse Nummber will be : "<<rev;
return 0;
}