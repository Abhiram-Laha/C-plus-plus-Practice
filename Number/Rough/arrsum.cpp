#include<iostream>
using namespace std;
 
int main(){
    int arr[]={25,4,85,64,7,35,74};

    int sum=0;

    int len=sizeof(arr)/sizeof(arr[0]);

    for (int i=0; i<len; i++){
        sum=sum+arr[i];
    }

    cout<<"Sum of the Array is : "<<sum;
    cout<<"\nAnd length of Array is : "<<len;

return 0;
}