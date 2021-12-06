/* C++ Program to Find Sum of Square of n Natural Numbers */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"-------Find Sum of Square of n Natural Numbers---------\n\n";
    
    int n;
    cout<<"Enter the nth term : ";
    cin>>n;

    long int sum=0;

    for (int i=1; i<=n; i++){

        sum=sum+ (i*i);

    }

    cout<<"\nSum of Square of "<< n <<" Natural Numbers is : "<<sum;

return 0;
}