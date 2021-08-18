/*
Given unsorted array A, find subarray on adding gives sum S
Ex: N=5, S=12, A[]={1,2,3,7,5}

Output: From index:2 To index:4
The sum of elements from 2nd to 4th is 12

Brute Force:
------------
1. Find all possible subarrays and find sum, if sum equals S then return start&end indices of subarray

 Time Complexity: O(n^2)

Optimized approach: 2 pointers
-------------------------------
1. Keep 2 pointers 'start' and 'end', a variable 'currSum' for sum from 'start' to 'end'
2. Increment 'end' till currSum + arr[end] > S
3. Increase 'start' until currSum <= S

 Time Complexity: O(n)

*/

#include<iostream>
#include<minmax.h>

using namespace std;

void sumofsubarray(int *arr, int n, int S){
    
    int i=0,j=0,start=-1,end=-1,currSum=0;
    while(j<n &&  currSum+arr[j]<=S){
        currSum+=arr[j];
        j+=1;
    }
    if(currSum==S){
        cout<<"Start index:"<<i+1<<"  End index:"<<j<<endl;
        return;
    }
    while(j<n){
       currSum+=arr[j];
       while(currSum>S){
           currSum-=arr[i];
           i++;
       } 
       if(currSum == S){
            start=i+1;
            end=j+1;
            break;
       }
       j++;
    }
    cout<<"Start index:"<<start<<"  End index:"<<end<<endl;
}

int main(){
    int n,S;
    
    cin>>n;

    int arr[n];
    
    cout<<"Enter Array Elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter Req. Sum:";
    cin>>S;
    sumofsubarray(arr,n,S);

    return 0;

}