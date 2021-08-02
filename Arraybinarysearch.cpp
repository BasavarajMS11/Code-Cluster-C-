#include<iostream>

using namespace std;

int binarysearch(int arr[], int n, int key){
    int l=0,h=n;
    while(l<=h){
        int mid=(l+h)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            h=mid-1;
        }
        else if(arr[mid]<key){
            l=mid+1;
        }

    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    cout<<"Enter Array Elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter Key:";
    cin>>key;

    cout<<binarysearch(arr,n,key);

    return 0;
}