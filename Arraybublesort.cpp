#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter Array Elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    int iteration=1;
    while(iteration<n){
        for(int i=0;i<n-iteration;i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        iteration++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}