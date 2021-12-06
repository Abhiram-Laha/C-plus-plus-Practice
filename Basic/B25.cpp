/* C++ Program to Find number of Digits in any number */
#include<iostream>
using namespace std;
 
int main(){
    int num;
    cout<<"-----Find number of Digits in any number-------\n\n";
    cout<<"Enter a Number : ";
    cin>>num;

    int count=0;
    
    while (num>0){
        count+=1;
        num=num/10;

    }
    cout<<"The Total Numbers of digits in given Number is :"<<count<<endl;

return 0;
}