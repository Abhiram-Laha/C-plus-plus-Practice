/* C++ program to concatenate two string */
#include<iostream>
using namespace std;
 
int main(){
    string str1;
    cout<<"Enter 1st String : ";
    getline(cin,str1);

    string str2;
    cout<<"\nEnter 2nd String : ";
    getline(cin,str2);

    string new1=str1+str2;

    cout<<"\nNew Concatenated String is : "<<new1;

return 0;
}