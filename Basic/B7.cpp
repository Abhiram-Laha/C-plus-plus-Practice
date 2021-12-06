/* C++ Program to Find ASCII Value of a Character */
#include <iostream>
using namespace std;

int main(){
    char a;
    cout<<"---------Find ASCII Value of a Character-----------\n\n";
    cout<<"Enter a Character : ";
    cin>>a;

    //char to ascii
    int val=int(a);
    cout<<"\nASCII value of '"<<a<<"' is : "<<val;
    return 0;
}