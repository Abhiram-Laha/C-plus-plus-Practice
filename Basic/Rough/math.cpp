#include<iostream>
#include<math.h>
using namespace std;
 
int main(){
    float num;
    cout<<"----Learning the use of MATH.H library----\n\n";

    num=45.69;

    cout<<"SIN : "<<sin(num)<<endl;
    cout<<"COS : "<<cos(num)<<endl;
    cout<<"TAN : "<<tan(num)<<endl;
    cout<<"SQUARE ROOT: "<<sqrt(num)<<endl;

    cout<<"POWER : "<< pow(num,2)<<endl;
    cout<<"ABSOLUTE VALUE : "<<abs(num)<<endl;
    cout<<"ROUND OFF : "<<roundf(num)<<endl;
    

return 0;
}