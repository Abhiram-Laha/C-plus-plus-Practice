/* C++ Program to find Factorial of a Number */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"-----Find Factorial of a Number------\n\n";
    int num;

    cout<<"Enter a Number : ";
    cin>>num;
    
    int fac=1;
    for (int i = 1 ; i<=num; i++){
        fac=fac*i;
    }

    cout<<"\nThe Factorial of "<<num<<" is : "<<fac;

return 0;
}