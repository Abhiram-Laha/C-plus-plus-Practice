/* C++ program to Find Largest Number among three numbers */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"------Find Largest Number among three numbers------\n\n";
    int num[3];
    
    //input
    cout<<"Enter three Numbers one by one : \n";
    for(int i=0; i<=2; i++){
        cin>>num[i];
    } 

    //check
    int n1=num[0],n2=num[1],n3=num[2];
    cout<<"\nGiven numbers are : "<<n1<<" "<<n2<<" "<<n3;


    cout<<endl<<endl;
    if ( (n1>n2) && (n1>n3) ){
        cout<<n1<<" is the Largest Number amoung all.";
    }
    else if ( (n2>n1) && (n2>n3) ){
        cout<<n2<<" is the Largest Number amoung all.";
    }
    else{
        cout<<n3<<" is the Largest Number amoung all.";
    }

return 0;
}