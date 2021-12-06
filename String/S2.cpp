/* C++ Program to Find Frequency of Characters in String */
#include<iostream>
using namespace std;
 
int main(){

    char str[20];
    cout<<"Enter a String : ";
    cin>>str;

    cout<<"\nEnter letter to finds its occourence : ";
    char let;
    cin>>let;

    int count=0,i;
    for (i = 0;  str[i] != NULL; i++){

        if (str[i] == let){
            count++;
        }
    }
    cout<<"\nOccurence of '"<<let<< "' in the given string is : "<<count;

return 0;
}