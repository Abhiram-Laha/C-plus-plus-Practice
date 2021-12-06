/* CHEFVACATION */
#include<iostream>
using namespace std;
 
int main(){
               //x-family   //y-friends          //z=toral days

    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x;
        cin>>y;
        cin>>z;

        int sum;
        sum= x+y ;

       
        if (sum<=z){
            cout<<"YES";
        }

        else{
            cout<<"NO";
        }
        cout<<"\n";


    }

return 0;
}