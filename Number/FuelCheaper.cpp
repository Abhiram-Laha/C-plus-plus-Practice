/* Which Fuel is Cheaper  */
#include<iostream>
using namespace std;
 
int main(){
    int X,Y,A,B,K;             //X=Petrol, Y=Diesel, A=increase in X, B=Increase in Y, K=Months
    
    cout<<"Enter : " ;          //remove before submission

    cin>>X>>Y>>A>>B>>K;

    //cout<<K;

    //for increment

    for (int i=1; i>=K; i++){
        X=X+A;
        Y=Y+B;
    }

    if (X>Y){
        cout<<"PETROL";
    }
    else if(X==Y){
        cout<<"SAME PRICE";
    }
    else{
        cout<<"DIESEL";
    }


return 0;
}