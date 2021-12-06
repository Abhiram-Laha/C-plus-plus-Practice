/* C++ Program to Find HCF of two numbers */
#include<iostream>
using namespace std;
 
int main(){
    int n1,n2,i,hcf;
    cout<<"----Find HCF of two numbers----\n\n";

    cout<<"Enter Numbers : ";
    cin>>n1>>n2;


    for (i=1; i<=n1 && i<=n2; i++){

        if (n1%i==0 && n2%i==0){
            hcf=i;
        }
    }

    cout<<"\nThe HCF of given Numbers is : "<<hcf;

return 0;
}