/* C++ Program to Check Number is Odd or Even */
#include<iostream>
using namespace std;
 
int main(){
    int num;
    cout<<"-----Check Number is Odd or Even------\n\n";
    cout<<"Enter a Natural Number : ";
    cin>>num;
     
    cout<<endl;
    //check
    if (num%2==0){
        cout<<num<<" is a Even Number.";
    }
    else if (num==0){
        cout<<"Invalid Input.......";
    }
    else{
        cout<<num<<" is an Odd Number.";
    }

return 0;
}