/* C++ program to Find Length of String */
#include<iostream>
#include<string.h>
using namespace std;
 
int main(){

    cout<<"------Program to Find Length of String--------\n\n";

    string name;
    cout<<"Enter a String : ";
    getline(cin,name);

    int len;
    len=name.length();

    cout<<"\nLength of the String is : "<<len;



return 0;
}