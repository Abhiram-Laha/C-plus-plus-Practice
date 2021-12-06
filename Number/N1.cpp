/* C++ Program to Reverse a Number */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"----Program to Reverse a Number-----\n\n";

    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    int rem,rev=0;

    while (num>0){
        rem=num%10;
        //cout<<rem<<endl;
        rev=rev*10+rem;
        //cout<<rev<<endl;

        num=num/10;
        //cout<<num<<endl;
    }

    cout<<"\nReversed Number is : "<<rev;

return 0;
}