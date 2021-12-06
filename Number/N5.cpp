/* C++ program to Find Largest Number among three numbers */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"-----Find Largest Number among three numbers------\n\n";
    int a,b,c;
    cout<<"Enter three Numbers : ";
    cin>>a>>b>>c;
    
    cout<<endl;
    if (a>b && a>c){
        cout<<a<<" is the largest Number.";
    }
    else if(b>a && b>c){
        cout<<b<<" is the largest Number.";
    }
    else{
        cout<<c<<" is the largest Number.";
    }

return 0;
}