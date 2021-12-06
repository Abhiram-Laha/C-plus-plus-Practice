/* C++ Program to Find HCF of two numbers */
#include<iostream>
using namespace std;

void gcd(int num1 , int num2){
    if (num1==num2){
        cout<<"HCF is "<<num1;
    }

    while (num1!=num2){
        if (num1>num2){
            num1=num1-num2;
        }
        else{
            num2-=num1;
        }
    }
    cout<<num1;
}

int main(){
    cout<<"-----Find HCF of two numbers------\n\n";
    
    int a,b;
    cout<<"Enter two positive Numbers : ";
    cin>>a>>b;

    cout<<"\nThe HCF of the given number is ";
    gcd(a,b);
    
return 0;
}