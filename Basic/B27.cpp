/* C++ Program to Check given number is Armstrong or Not */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"-----Check given number is Armstrong or Not-----\n\n";

    int num;
    cout<<"Enter a Number : ";
    cin>>num; 
    int ornum=num;

    //check 
    cout<<endl;
    int arms=0,rem;

    while (num>0){
        rem=num%10;
        num=num/10;
        arms=arms+(rem*rem*rem);
    }

    if (ornum==arms){
        cout<<ornum<<" is an Armstrong Number.";
    }
    else{
        cout<<ornum<<" is not a Armstrong Number.";
    }
return 0;
}