/* C++ Program to Reverse String */

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string name;
    cout<<"Enter : ";
    getline(cin,name);

    /* for (int i=name.length()-1; i>=0; i--){
        cout<<name[i];
    }
 */
    //using inbuilt function

    reverse(name.begin(),name.end());

    cout<<name;


    


return 0;
}