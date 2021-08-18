//Intuition and Approach
//*Loop over the array and find the answer

//Maintain the following variables
//1. Previous Common Difference(pd)
//2. Current Arithmetic Subarray length (curr)
//3. Max arithmetic subarray length (ans)

// 2 cases
//Case 1: pd == A[i] - A[i-1] then curr+=1 and ans = max(ans, curr)
//Case 2: pd != A[i] - A[i-1] then curr=2

#include<iostream>
#include<minmax.h>

using namespace std;

int longestarithmeticsubarraylength(int *arr, int n){
    int ans=2;
    int pd = arr[1] - arr[0];
    int j=2;
    int curr = 2;

    while(j<n){
        if(pd == arr[j] - arr[j-1]){
            curr++;
        }
        else{
            pd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    return ans;
}

int main(){
    int n;
    
    cin>>n;

    int arr[n];
    cout<<"Enter Array Elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=longestarithmeticsubarraylength(arr,n);

    cout<<ans<<endl;

    return 0;

}