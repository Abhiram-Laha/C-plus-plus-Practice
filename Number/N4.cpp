/* C++ Program to Check given number is Armstrong or Not */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"-----Check given number is Armstrong or Not------\n\n";
    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    int ornum=num;
    
    int rem,arm=0;
    while (num>0){
        rem=num%10;
        arm=arm+(rem);
        num=num/10;
    }
    
    cout<<endl;
    if (ornum==arm){
        cout<<ornum<<" is a Armstrong Number.";
    }
    else{
        cout<<ornum<<" is not a Armstrong Number.";
    }

return 0;
}