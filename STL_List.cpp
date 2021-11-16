/*
list : doubly linked list (previous & next pointers)
No direct access, have to traverse
*/

#include<iostream>
#include<list>

using namespace std;

int main() {
    
    list<int> l;
    
    l.push_back(1);
    l.push_front(0);
    l.push_back(2);
    
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    l.erase(l.begin()); //Erasing begin element
    
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    cout<<"Size of list "<<l.size()<<"\n";
    
    list<int> l2(l); //copy list l to l2
    
    for(int i:l2){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    
    list<int> l3(3,3); //declare and initialize list of size 3 to 3
    for(int i:l3){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    
}