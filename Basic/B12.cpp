/*  C++ Program to Convert Days Into Years, Weeks and Days */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"------Convert Days Into Years, Months, Weeks and Hours------";
    float days;
    cout<<"\n\nEnter Number of Days : ";
    cin>>days;

    float years,months,weeks,hours;

    years=(days/365);
    months=(days*0.0329);
    weeks=(days/7);
    hours=(days*24);

    //printing
    cout<<endl;
    cout<<days<<" Days into Years : "<<years<<" years."<<endl;
    cout<<days<<" Days into Months : "<<months<<" months."<<endl;
    cout<<days<<" Days into Weeks : "<<weeks<<" weeks."<<endl;
    cout<<days<<" Days into Hours : "<<hours<<" hours."<<endl;
return 0;
}