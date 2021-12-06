/* C++ Program to Check Character is Uppercase, Lowercase, Digit or Special Character */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"-----Check Character is Uppercase, Lowercase, Digit or Special Character-----\n"<<endl;

    char take;

    cout<<"Enter a Character : ";
    cin>>take;
    cout<<endl;
    if (take>=65 && take<=90){
        cout<<"Given character is UpperCase.";
    }
    else if(take>=97 && take<=122){
        cout<<"Given Character is LowerCase.";
    }
    else if (take>=48 && take<=57){
        cout<<"Given Charcter is Digit.";
    }
    else{
        cout<<"Given Character is Special Charcter.";
    }

return 0;
}