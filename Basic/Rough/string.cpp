/* use of cstring library */
#include<iostream>
#include<cstring>
using namespace std;
 
int main(){
    string name,stream;
    cout<<"-----Learning the use of CSTRING library-----\n\n";

    cout<<"Enter Your Name : ";
    cin>>name;
    cout<<"Enter Your Stream : ";
    cin>>stream;

    cout<<"\nConcatenation of Inputs : "<<endl<<"Using '+' : "<<(name+stream)<<endl;
    //cout<<"Using Append Function : "<<name.append(stream)<<endl;

    cout<<"The length of string is : "<<(name.length())<<" bytes";

    cout<<"\nThe size of string is : "<<name.size();



return 0;
}