#include<iostream>
#include<minmax.h>

using namespace std;

int main(){
    int n;
    
    cin>>n;

    int arr[n];
    cout<<"Enter Array Elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int mx=-1999999;
    for(int i=0;i<n;i++){
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }

}