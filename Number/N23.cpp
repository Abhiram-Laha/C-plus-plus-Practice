/* C++ Program to Calculate Grade of Student */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"------Calculate Arithmetic Mean-------\n\n";

    int n;
    cout<<"How many Terms, want to Enter : ";
    cin>>n;

    int sum=0,val;
    cout<<"\nEnter the value below : "<<endl;

    for (int i=1; i<=n; i++){
        cin>>val;
        sum=sum+val;

    }

    int art=sum/5;

    cout<<"\nThe Arithmetic Mean is : "<<art;

return 0;
}