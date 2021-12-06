/* C++ Program to Check Number is Unique Number or Not */
#include<iostream>
using namespace std;
 
int main(){
    int num=123426;
    int ornum=num;

    //len
    int len1=0;
    while (ornum>0){
        len1=len1+1;
        ornum/=10;
    }
    cout<<"Length of Array : "<<len1<<endl;

    //assign
    int arr1[20];
    for (int i = len1-1; i>=0; i--){
        arr1[i]=num%10;
        num/=10;
    }

    //array print 
    cout<<"\nArray : ";
    for (int m=0; m<len1; m++){
        cout<<arr1[m]<<" ";
    }

    //check

    for (int i=0;  i<len1; i++){
       // cout<<" i "<<i<<" ";

        for (int j=i+1; j<len1; j++){
            //cout<<" j "<<j<<" ";
            if (arr1[i]==arr1[j]){
                cout<<"NO";
            }
        }
    }
    


return 0;
}