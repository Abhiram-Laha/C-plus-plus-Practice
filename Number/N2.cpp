/* C++ Program to Find number of Digits in any number */

#include<iostream>
using namespace std;
 
int main(){
    cout<<"-----Find number of Digits in any number-----\n\n";
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    int count=0;
    while (num>0){
        count++;
        num=num/10;

    }
    cout<<"\nTotal Numbers in the digit : "<<count;

return 0;
}