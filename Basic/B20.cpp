/* C++ Program to Check Whether a character is Vowel or Consonant */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"------Check Whether a character is Vowel or Consonant-------\n\n";

    char n;
    cout<<"Enter a Character : ";
    cin>>n;
    
    //checking for vowel
    if ( n=='a' || n=='i' || n=='o' || n=='e' || n=='u' || n=='A' || n=='I' || n=='O' || n=='U' || n=='E'){
        cout<<"\nThe given character ["<<n<<"] is a Vowel.";

    }
    /* else if(n>=48 && n>=57){
        cout<<"\nInvaild Input , don't enter Digit.";
    } */

    else{
        cout<<"\nThe given character ["<<n<<"] is a Consonant.";
    }

return 0;
}