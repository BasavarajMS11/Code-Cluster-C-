/*
Set : All elments unique (Each Element Stored once)
      Uses BST at backend 
*/

#include<iostream>
#include<set>

using namespace std;

int main(){
    
    set<int> s;
    
    s.insert(0);  //O(log N)
    s.insert(0);
    s.insert(1);
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(2);
    s.insert(2);
    
    for(auto i:s){
        cout<<i<<"\n";
    }
    
    s.erase(s.begin());  //Deletes first Element
    
    set<int>::iterator it = s.begin();
    
    it++;
    
    s.erase(it); // Deletes element 2 (third element from first)
    
    for(auto i:s){
        cout<<i<<"\n";
    }
    
    //Check if element exists in set
    cout<<"Element 3 :"<<s.count(3)<<"\n";
    
    //Returning the index
    set<int>::iterator itr = s.find(1);
    
    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<"\n";
    
    
    return 0;
}