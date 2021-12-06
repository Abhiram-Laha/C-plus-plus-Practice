/* C++ program to Print Table of any Number */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"------Print Table of any Number------\n\n";

    int num;
    cout<<"Enter a Number : ";
    cin>>num;
    
    cout<<"\nTable of "<<num<<" : "<<endl;
    for (int i=1 ; i<=10; i++){
        cout<<num<<" x "<<i<<" = "<<(num*i)<<endl;
    }
return 0;
}