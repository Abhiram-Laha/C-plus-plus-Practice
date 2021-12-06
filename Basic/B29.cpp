/* C++ program to Check Number is Palindrome or not */
#include<iostream>
using namespace std;
 
int main(){

    cout<<"-----Check Number is Palindrome or not-------\n\n";
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    int num1=num;

    int store=0,rev;

    while (num>0){
        rev=num%10;
        store=store*10+rev;
        num=num/10;
    }
    cout<<endl;

    if (store==num1){
        cout<<num1<<" is a Palindrome.";
    }
    else{
        cout<<num1<<" is not Palindrome.";
    }

return 0;
}