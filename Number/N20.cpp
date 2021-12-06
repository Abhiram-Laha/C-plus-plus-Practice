/* C++ Program to find Area and Perimeter of Rectangle */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"-----Find Area and Perimeter of Rectangle------\n\n";

    float length,breath;
    cout<<"Enter the Length : ";
    cin>>length;
    cout<<"Enter the Breadth : ";
    cin>>breath;

    double area=(length*breath);
    double peri=2*(length+breath);

    cout<<"\nThe Area of the Rectangle is : "<<area<<" sq. units ";
    cout<<"\n\nThe Perimeter of the Rectangle is : "<<peri<<" units ";

return 0;
}