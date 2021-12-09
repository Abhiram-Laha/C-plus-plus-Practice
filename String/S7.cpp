/* C++ Program to Copy String into Another String */
#include<iostream>
#include<string.h>
using namespace std;
 
int main(){
    string name1;
    cout<<"Enter 1st String : ";
    getline(cin,name1);

    //string name2=name1;

    strcpy(name1,name2);
    

    cout<<"\nAfter, copy 2nd String : "<<name2;

return 0;
}