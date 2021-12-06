/* C++ Program to find Fibonacci Series*/
#include<iostream>
using namespace std;
 
int main(){
    cout<<"-----Find Fibonacci Series------\n\n";
    int num;
    cout<<"Enter Term : ";
    cin>>num;

    //0 1 1 2 3 5 8 13 ....
    int first=0,second=1,sum;
    cout<<"\nFibonacci Series : "<<first<<" "<<second<<" ";

    for (int i = 2; i<=num; i++){

        sum=first+second; 
        cout<<sum<<" ";      
        first=second;
        second=sum;
    }


return 0;
} 

