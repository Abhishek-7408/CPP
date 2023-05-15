#include <iostream>
using namespace std;
int main(){
    int a[5],temp;
    cout<<"Enter array Elements";
    cin>>a[5];
    for(int i=0;i<5;i++)
    {
        for(int i=0;i<5;i++){
            for(int j=0;j=i+1;j++){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<a[i];
    }
}