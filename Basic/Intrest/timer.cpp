/* Create a timer program that will take the number of seconds as input and output the remaining time. */
#include<iostream>
using namespace std;
 
int main(){
    int time;
    cout<<"Enter your Time (in sec) : ";
    cin>>time;
    
    cout<<"\nTime Remaining : \n";
    while (time>0){
        cout<<time<<" s"<<endl;
        time=time-1;
    }


return 0;
}