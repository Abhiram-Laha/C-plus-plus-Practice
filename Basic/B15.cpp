/* C++ program to find cube of number using macros */
#include<iostream>
using namespace std;
 
int main(){
    float num,cube;
    cout<<"-----Find cube of number using Macros-----";
    
    cout<<"\n\nEnter a Positive Number : ";
    cin>>num;

    //cal
    cube=(num*num*num);

    cout<<"\nThe Cube of Entered Number "<<num<<" is : "<<cube;


return 0;
}