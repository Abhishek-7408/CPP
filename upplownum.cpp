#include <iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;

    if(ch>='a' && ch<='z'){
        cout<<"Lower case";
    }
    else if(ch>='A' && 'Z'){
        cout<<"Upper case";
    }
    else{

        cout<<"Number";
    }
}