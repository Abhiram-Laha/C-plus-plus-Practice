/* C++ Program for Pascal Triangle */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"----Pascal Triangle-----\n\n";
    int n=5;

    for (int i=1; i<=n; i++){
       // cout<<i<<endl;
       
       for (int j=1; j<=i; j++){
           cout<<j;
       }
       cout<<endl;
    }

return 0;
}