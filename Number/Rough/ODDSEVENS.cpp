/* /* ODDSEVENS 
#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while (t--){

        int x,y;
        cin>>x>>y;

        int sum;
        sum=(x+y);

        if ( sum%2==0){
            cout<<"Bob";
        }
        else{
            cout<<"Alice";
        }
        cout<<endl;


    }

return 0;
} */

#include<iostream>
using namespace std;
 
int main(){
    int test;
    cin>>test;
    while (test--){
        int n;
        cin>>n;
        if (n%2==0){
            cout<<n<<endl;
        }
        else if (n%2!=0){
            cout<<n-1<<endl;
        }


    }


return 0;
}