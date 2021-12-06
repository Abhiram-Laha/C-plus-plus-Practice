/* C++ Program to find average of numbers */
#include<iostream>
using namespace std;
 
int main(){
    cout<<"------Find average of numbers-------\n\n";

    int time;
    cout<<"How many Numbers will Entered : ";
    cin>>time;

    float avg,sum=0;
    int num;
    cout<<"\nEnter the Numbers : \n";
    
    for (int i=0; i<+time; i++){
        cin>>num;
        sum=sum+num;
    }

    avg=(sum/time);

    cout<<"\nAverage of the Given Numbers is : "<<avg;

return 0;
}