/* C++ program to find area of circle */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"-----Find area of circle------\n\n";

    float radis;
    cout<<"Enter the Radius of Circle : ";
    cin>>radis;

    double area=(3.14)*(radis*radis);

    cout<<"\nThe Area of the Circle is : "<<area<<"  sq. units";

return 0;
}