#include<iostream>
#include<climits>
#include<minmax.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    int maxN=INT_MIN,minN=INT_MAX;
    
    for(int i=0;i<n;i++){
        
        maxN=max(maxN,array[i]);
        minN=min(minN,array[i]);
        
    }
    cout<<"MAX:"<<maxN<<" "<<"MIN:"<<minN<<endl;
}