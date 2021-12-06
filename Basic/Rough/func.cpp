/* Learning the use functions */
#include<iostream>
using namespace std;
 
void avg(int x,int y,int z){                                  //average function
    float av=(x+y+z)/3;
    cout<<"The Average of the 3 Numbers is : "<<av;
}

void sum(int x,int y,int z){                                  //sum function
    int s=(x+y+z);
    cout<<"The sum of given Numbers is : "<<s;
}



int main(){
    avg(5,7,6);
    cout<<endl;
    sum(58,74,2);


return 0;
}