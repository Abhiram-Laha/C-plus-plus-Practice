/* Array Learning */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"----Learning Array-----\n\n";

    //in line intake

    /* int num[10]={0,1,2,3,4,5,6,7,8,9};

    cout<<"Your Entered Array is : "<<endl;
    
    for (int i=0; i<10; i++){
        cout<<num[i]<<endl;
    } */

    
    //intake from user

    string name[5];

    cout<<"Enter Name of Student : \n";

    for (int i=0; i<5; i++){
        cin>>name[i];
    }

    cout<<"\nGiven Data : \n"<<endl;

    for(int j= 0; j<5; j++){
        cout<<name[j]<<endl;
    }
return 0;
}