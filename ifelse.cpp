#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    if(a>0){
        cout<<"Number is positive"<<endl;

    }
    if(a<0){
        cout<<"Number is negative"<<endl;

    }
    else{
        cout<<"Number is neither positive nor negative which is zero";

    }
    return 0;
}