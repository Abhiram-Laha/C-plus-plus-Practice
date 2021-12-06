/* C++ Program to calculate sum and average of three numbers */
#include<iostream>
using namespace std;

int main(){
    cout<<"------Program to calculate sum and average of three numbers-------\n";
    int num1,num2,num3; //intake
    
    cout<<"\nEnter 1st Number : ";
    cin>>num1;
    cout<<"Enter 2nd Number : ";
    cin>>num2;
    cout<<"Enter 3rd Number : ";
    cin>>num3;

    //cal
    int sum;
    float avg;

    sum=num1+num2+num3;
    avg=(sum/3.0);

    cout<<"\nSum of the Numbers is : "<<sum<<endl;
    cout<<"Average of the Numbers is : "<<avg;

    return 0;
}