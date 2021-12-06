/* C++ Program to Make a Simple Calculator */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"------Simple Calculator-------\n\n";

    int num1,num2;
    cout<<"Enter 1st Number : ";
    cin>>num1;
    cout<<"Enter 2nd Number : ";
    cin>>num2;

    char opr;
    cout<<"\nOpreation Want to do { + or - or * or / } : ";
    cin>>opr;

    switch (opr)
    {
    case '+':
    cout<<"\nAddition of "<<num1<<" and "<<num2<<" is : "<<num1+num2;
        break;
    case '-':
    cout<<"\nSubtraction of "<<num1<<" and "<<num2<<" is : "<<num1-num2;
    break;

    case '*':
    cout<<"\nMultiplication of "<<num1<<" and "<<num2<<" is : "<<num1*num2;
    break;

    case '/':
    cout<<"\nDivision of "<<num1<<" and "<<num2<<" is : "<<num1/num2;

    
    default:
    cout<<"\nInvaild Opreator.....!!\n";
        break;
    }


return 0;
}