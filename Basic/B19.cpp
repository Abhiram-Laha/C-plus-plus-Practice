/* C++ Program to Find All Roots of a Quadratic Equation */
#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    cout<<"--------Find All Roots of a Quadratic Equation----------\n\n";

    int cof1,cof2,consta;
    
    cout<<"Enter coefficient of x^2 : ";
    cin>>cof1;
    cout<<"Enter coefficient of x : ";
    cin>>cof2;
    cout<<"Enter constant value : ";
    cin>>consta;

    cout<<"\nStandard Form of Quadratic Equation : "<<endl;
    cout<<cof1<<"x^2 + "<<cof2<<"x + "<<consta<<" = 0 ";

    float deter,x1,x2;

    deter=(cof2*cof2-4*cof1*consta);

    if (deter>0){
        x1=( -cof2 + sqrt(deter) ) / (2*cof1) ;
        x1=( -cof2 + sqrt(deter) ) / (2*cof1) ;
        
        cout<<"\nThe discriminant is positive, then there are two distinct roots : "<<endl;
        cout<<"Root 1 : "<<x1<<endl;
        cout<<"Root 2 : "<<x2<<endl;          
    }

    else if (deter==0){
        x1=-( cof2 / (2*cof1));

        cout<<'\nThe discriminant is zero, then there is exactly one real root : '<<endl;
        cout<<"The Root of Quadratic Equation is : "<<x1;
    }

    else if (deter < 0 ){
        x1 = ( - cof2 / (2*cof1)) + ( sqrt(-deter) / (2*cof1));
        x2 = ( - cof2 / (2*cof1)) - ( sqrt(-deter) / (2*cof1));

        cout<<"\n\nThe discriminant is negative, then there are no real roots.\nRather, there are two distinct (non-real) complex roots : \n"<<endl;

        cout<<"Root 1 : "<<x1<<endl;
        cout<<"Root 2 : "<<x2<<endl;
    }

return 0;
}