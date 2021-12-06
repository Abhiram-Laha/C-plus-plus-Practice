/* C++ Program to find Fibonacci Series */
#include<iostream>
using namespace std;
 
 /* n,n+1,2n+1,3n+1 */
int main(){
    cout<<"------Find Fibonacci Series--------\n\n";
    int num;
    cout<<"Enter how many terms want : ";
    cin>>num;
    
    int next,f1=0,f2=1;
    cout<<"The Fibonacci Series of "<<num<<" is : \n";

    for (int i=0; i<num; i++){
        cout<<" "<<f1<<" ";
        next=f1+f2;
        f1=f2;
        f2=next;

    }


return 0;
}