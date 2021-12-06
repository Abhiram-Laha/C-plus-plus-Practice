/* C++ program to generate random numbers */
#include<iostream>
#include<time.h>
using namespace std;

int main(){
    int num;  //random value container
    int i;    //loop
    int n;

    srand(time(0));  //sleep 

    cout<<"Enter how many random number you want : ";
    cin>>n;

    cout<<"\nRandom Numbers are : \n";

    for (i=1; i<=n; i++){
        num=(rand()%100+1);
        cout<<num<<" ";
    }
    //cout<<"Dice Number : "<<num;
    return 0;
}