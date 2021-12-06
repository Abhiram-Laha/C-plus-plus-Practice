/* C++ Program to find Cube Root of Number */
#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    cout<<"------Find Cube Root of Number-------\n\n";

    float num;
    cout<<"Enter a number : ";
    cin>>num;

    double cube1;

    cube1=cbrt(num);

    cout<<"\nThe cube root of the Number is : "<<cube1;




return 0;
}