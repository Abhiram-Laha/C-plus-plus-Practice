/* C++ program to Check Number is Palindrome or not */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"-----Check Number is Palindrome or not------\n\n";

    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    int ornum=num;

    int rem,rev=0;
     
    while (num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    
    cout<<endl;
    if (ornum==rev){
        cout<<ornum<<" is a Palindrome Number.";
    }
    else{
        cout<<ornum<<" is not a Palindrome Number.";
    }

return 0;
}