/*
Vector: Similar to dynamic array
*/
#include<iostream>
#include<vector>

using namespace std;

int main() {

    vector<int> v;
    
    cout<<"Capacity: "<<v.capacity()<<"\n";
    
    v.push_back(1);                         //Push from back
    cout<<"Capacity: "<<v.capacity()<<"\n";
    
    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<"\n";
    
    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<"\n";
    
    cout<<"Element index at 1 : "<<v.at(1)<<"\n";
    
    cout<<"Front:"<<v.front()<<"\n";
    cout<<"Back:"<<v.back()<<"\n";
    
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    v.pop_back();  //Remove from end
    
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    cout<<"Size before clear : "<<v.size()<<"\n";
    
    v.clear();      //Clear vector
    
    cout<<"Size after clear : "<<v.size()<<"\n";
    
    vector<int> a(4,1);  //Creating vector with size 4 initialized to 1
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    vector<int> a2(a); //Vector of configuration same as 'a'
    for(int i:a2){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    
    return 0;
}