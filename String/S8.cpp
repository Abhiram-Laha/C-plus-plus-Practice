/* C++ Program to Find Number of Vowels, Consonants, Digits, Spaces in String */
#include<iostream>
#include<string.h>
using namespace std;
 
int main(){

    string str1;
    cout<<"\nEnter a String : ";
    getline(cin,str1);

    int vowels=0,space=0,cons=0,digits=0;

    for (int i=0; i<str1.length(); i++){
        
        //vowels
        if (str1[i] == 'a' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' || str1[i] == 'e' ){
            vowels++;
        }
        
        //space
        else if (str1[i] == ' '){
            space++;
        }

        //digits
        else if(str1[i]>'0' and str1[i]<'9'){
            digits++;
        }
        
        //constraint
        else{
            cons++;
        }



    }
    cout<<"\nTotal number of Vowels : "<<vowels<<endl;
    cout<<"Total number of Consonants : "<<cons<<endl;
    cout<<"Total number of Digits : "<<digits<<endl;
    cout<<"Total number of Spaces : "<<space<<endl;
    
    

    

return 0;
}