/* C++ Program to Calculate Grade of Student */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"-----Calculate Grade of Student------\n\n";

    int n1,n2,n3,n4,n5;

    cout<<"Enter Marks of all 5 Subjects :: \n";

    cout<<"Enter Marks [ 1 ] : ";
    cin>>n1;
    cout<<"Enter Marks [ 2 ] : ";
    cin>>n2;
    cout<<"Enter Marks [ 3 ] : ";
    cin>>n3;
    cout<<"Enter Marks [ 4 ] : ";
    cin>>n4;
    cout<<"Enter Marks [ 5 ] : ";
    cin>>n5;

    float avg=(n1+n2+n3+n4+n5)/5;
    

    cout<<"\nYour Grade is : ";

    if (avg > 80){
        cout<<"A";
    }
    else if (avg > 60 and avg <80){
        cout<<"B";
    }
    else if (avg > 40 and avg <60){
        cout<<"C";
    }
    else if (avg > 0 and avg <40){
        cout<<"D";
    }

return 0;
}