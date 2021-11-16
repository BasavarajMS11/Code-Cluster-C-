/*
Map : Key-Value pair
      Each key can only point to single Key-Value
      Uses Red Black Tree -> Complexity O(logN) for ordered map
      Unordered map uses Hash Table -> Complexity O(1)
*/

#include<iostream>
#include<map>

using namespace std;

int main(){
    map<int,string> m; //Ordered -> Sorted
    
    m[10]="Basavaraj";
    m[1]="Dynamic";
    m[2]="Developer";
    
    m.insert({3,"Mr."}); //Insert to map
    
    
    for(auto i:m){
        cout<<i.first<<"\n";
    }
    cout<<"\n";
    
    cout<<"Is Element of key 10 present? : "<<m.count(10)<<"\n"; //Check element present at key
    
    m.erase(3);  //Deleting
    
    for(auto i:m){
        cout<<i.second<<"\n";
    }
    cout<<"\n";
    
    auto it=m.find(2);  //Printing after key 2
    
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<"\n";
    }
    
    return 0;
}