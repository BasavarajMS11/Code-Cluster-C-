/*
First Repeating element: An element that occurs more than once and
                        whose index of first occurence is smallest.

Approach:
To check if an element is repeating maintain an array idx[], which stores first occurence(index) of element arr[i]
* Initialize idx[] with -1, and minidx with INT_MAX
* Keep updating idx[], while traversing the given array

*/
#include<iostream>
#include<minmax.h>


using namespace std;

void firstrepeatingelement(int *arr, int n){
    const int N = 1000;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]= -1;
    }

    int minidx= INT_MAX;
    
    for(int i=0;i<n;i++){
        if(idx[arr[i]] != -1){
            minidx=min(minidx, idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }

    }
    if(minidx == INT_MAX){
        cout<<"No element repeats"<<endl;
    }
    else{
        cout<<minidx<<endl;
    }
}

int main(){
    int n;
    
    cin>>n;

    int arr[n];
    
    cout<<"Enter Array Elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    firstrepeatingelement(arr,n);

    return 0;

}