/* Age Determination */
#include<iostream>
using namespace std;
 
int main(){
    int age;
    cout<<"Enter your Age : ";
    cin>>age;
    cout<<endl;

    if (age <= 0 or age>120){
        cout<<"Invalid Input";
    }

    else if (age>14){
        if (age>=18){
            cout<<"You are an Adult.";
        }
        else{
            cout<<"You are a Teenager.";
        }
    }
    else{
        if (age <=14){
            cout<<"You are a Child.";
        }
        

    }

return 0;
}