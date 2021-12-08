/* C++ Program to Compare Two Strings */
#include<iostream>
#include<string.h>
using namespace std;
 
int main(){
    cout<<"-----Compare Two Strings-------\n\n";

    string str1;
    cout<<"Enter First String : ";
    getline(cin,str1);

    string str2;
    cout<<"\nEnter Second String : ";
    getline(cin,str2);
 
    cout<<endl;
    
    if (str1==str2){
        cout<<"Given Strings are SAME.";
    }
    else{
        cout<<"Given Strings are DIFFERENT.";
    }



return 0;
}