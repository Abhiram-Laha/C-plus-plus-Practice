/* C++ Program to Convert Binary to Decimal */
#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    cout<<"----Convert Binary to Decimal------\n\n";

    unsigned long num,rem,deci=0;

    cout<<"Enter the Binary Number : ";
    cin>>num;
    unsigned long ornum=num;

    for (int i=0; num!=0; ++i){

        rem=num%10;
        deci= (rem) * (pow(2,i))  + deci;
        num=num/10;
    }

    cout<<"\nThe Decimal Conversion of "<<ornum<<" is : "<<deci;

return 0;
}