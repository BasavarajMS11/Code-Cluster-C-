//Kickstart record breaker
//Record breaking day 
//1. No(visitors on day) > No(visitors on day-1 or previous)
//2. Either last day or No(visitors on day) > No(visitors on day+1 or following day)
 
/* Conditions
(1). Strictly greater than all previous values
(2). Strictly greater than following value

Example: Array of number of visitors each i'th day
        1 2 0 7 2 0 2 2
        x / x / x x x x

Brute force:
------------
1. Iterate over all the elements and check if it is record breaking day or not

Note: To check if arr[i] is a record breaking day, iterate over arr[0], arr[1],...., arr[i-1].

Time complexity for above each operation : O(n)
Overall Time complexity: O(n^2)

Optimized approach:
-------------------
Using max till i'th element using variable mx --> maximum till arr[i]
Then check arr[i]>mx and arr[i] > arr[i+1], {if i+1 < n}
             and update mx as mx=max(mx, arr[i])

Time complexity for above each operation : O(1)
Overall Time complexity: O(n)
*/
#include<iostream>
#include<minmax.h>

using namespace std;

int noofrecordbreakerday(int *arr, int n){
    int ans=0;
    int mx= -1;

    for(int i=0;i<n;i++){
        //if value greater than previous maximum and following
        if(arr[i]>mx && arr[i]>arr[i+1]){
            ans++;
        }
        mx=max(mx, arr[i]);
    }
    return ans;
}

int main(){
    int n;
    
    cin>>n;

    int arr[n+1];
    arr[n] = -1;
    cout<<"Enter Array Elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }

    int ans=noofrecordbreakerday(arr,n);

    cout<<ans<<endl;

    return 0;

}
