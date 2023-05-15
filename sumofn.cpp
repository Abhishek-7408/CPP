#include <iostream>
using namespace std;
int main(){
    int sum=0,n;
    cin>>n;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i=i+1;
    }
    cout<<"value of sum is"<<sum;
    return 0;
}