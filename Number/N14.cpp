/* C++ Program to Find Sum of First n Natural Numbers */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"------Find Sum of First n Natural Numbers-------\n\n";
    int n;
    cout<<"Enter the nth term : ";
    cin>>n;

    int sum=0;

    for (int i=1; i<=n; i++){
        sum=sum+i;
    }

    cout<<"\nSum of First "<< n <<" Natural Numbers is : "<<sum;

return 0;
}