/* C++ program to find LCM of two numbers */
#include<iostream>
using namespace std;


int main(){
    cout<<"-----Find LCM of two numbers------\n\n";
    int a,b;
    cout<<"Enter two positive number : ";
    cin>>a>>b;

    while (a!=b){
        if (a>b){
            a=a-b;
        }
        else{
            b-=a;
        }
    }
    int gcd=a;
    cout<<a<<endl;
   
    int lcm = (a*b);

    cout<<"LCM of the given numbers is : "<<(lcm/a);

return 0;
}