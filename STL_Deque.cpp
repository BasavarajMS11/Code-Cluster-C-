#include<iostream>
#include<deque>

using namespace std;

int main() {
    
    deque<int> d;
    
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_front(4);
    
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    d.pop_front();
    
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    cout<<"Element at index 0:"<<d.at(0)<<"\n";
    
    cout<<"Front:"<<d.front()<<"\n";
    cout<<"Back:"<<d.back()<<"\n";
    
    cout<<"Empty or not "<<d.empty()<<"\n";
    
    //Erase function to delete
    cout<<"Size before erasing : "<<d.size()<<"\n";
    
    d.erase(d.end()-1,d.end());      //Erase last element of deque
    
    cout<<"Size after erase : "<<d.size()<<"\n";
    
    return 0;
    
}