/* C++ Program to convert inches into yard, feet and inches */
#include<iostream>
using namespace std;
 
int main(){
    double inches;       //intake
    double yard,feet,metre;           //output
    
    cout<<"-------Program to convert inches into yard, feet and meters-------\n\n";
    //inches into yard
    cout<<"Enter Length (in inches) : ";
    cin>>inches;

    yard=(inches*0.0277778);
    cout<<"\nLength in yard : "<<yard<<" yards"<<endl;

    feet=(inches/12.0);
    cout<<"Length in feet : "<<feet<<" feets";
    
    metre=(inches/39.37);
    cout<<"\nLength in metres : "<<metre<<" metres";

 
return 0;
}