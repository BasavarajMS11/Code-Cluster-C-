/*
stack: LIFO Last In First Out
*/
#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> s;
    
    s.push("Garag");
    s.push("Savadatti");
    s.push("M");
    s.push("Basavaraj");
    
    cout<<"Top element: "<<s.top()<<"\n";
    
    s.pop();
    
    cout<<"Top element: "<<s.top()<<"\n";
    
    s.pop();
    
    cout<<"Top element: "<<s.top()<<"\n";
    
    cout<<"Empty or not: "<<s.empty()<<"\n";
    
    cout<<"Size of stack: "<<s.size()<<"\n";
    
    return 0;
    
}