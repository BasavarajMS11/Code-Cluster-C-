/*
Finding smallest positive number missing from the array

Approach:
---------
1. Create bool check[] array which indicates if any element x is present in array or not

2. Iterate over the array and mark non negaveti arr[i] as True

Example: Arr[] -> 0 -9 1 3 -4 5
               
         check[]->T  T F T  F T
         index  ->0  1 2 3  4 5

         Ans: 2 (first missing i.e., 2 isn't present)
*/
#include<iostream>
#include<minmax.h>

using namespace std;

void smallestposmissing(int arr[], int n){

    const int N=1000;
    bool check[N];
    for(int i=0;i<N;i++){
        check[i] = false;
    }

    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            check[arr[i]] = 1;
        }
    }
    int ans=-1;

    for(int i=0;i<N;i++){
        if(check[i]==false){
            ans=i;
            break;
        }
    }

    cout<<ans<<endl;
}

int main(){
    int n,S;
    
    cin>>n;

    int arr[n];
    
    cout<<"Enter Array Elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    smallestposmissing(arr,n);

    return 0;

}


