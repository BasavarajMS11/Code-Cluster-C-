/*
Priority Queue: First element always maximum (MaxHeap - default)

*/
#include<iostream>
#include<queue>

using namespace std;

int main(){
    
    //max_heap
    priority_queue<int> maxi;
    
    //min_heap
    priority_queue<int,vector<int>,greater<int> > mini;
    
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<"\n";
    
    mini.push(1);
    mini.push(0);
    mini.push(3);
    mini.push(2);
    
    n=mini.size();
    for(int i=0;i<n;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<"\n";
    
    cout<<"Queue empty or not: "<<mini.empty()<<"\n";
    
    return 0;
}