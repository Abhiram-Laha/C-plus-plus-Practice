/* C++ Program to Check given number is Prime number or not */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"-----Check given number is Prime number or not------\n\n";
    int num;
    bool prime;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<endl;

    

    for (int i = 2;  i<num; i++){
        
        if (num%i==0){
            prime=true;  
             //checking is there are factors or not
            break;
        }
    }
    
    if (num==1){
        cout<<"The smallest Prime Number is '2'.";
    }
    else if (prime==true){
        cout<<"The given number is not a Prime Number.";
    }
    else{
        cout<<"The given number is a Prime Number.";
    }

return 0;
}