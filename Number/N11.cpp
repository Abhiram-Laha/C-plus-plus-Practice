/* C++ Program to Find Power of Number */
#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    cout<<"-----Find Power of Number-------\n\n";

    int base,power;

    cout<<"Enter Base value : ";
    cin>>base;
    cout<<"Enter Power Amount : ";
    cin>>power;


    //cal

    float value;
    value=pow(base,power);

    cout<<"\nThe Power of the Number is : "<<value;

return 0;
}