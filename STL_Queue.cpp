/*
Queue: FIFO First In First Out
*/
#include<iostream>
#include<queue>

using namespace std;

int main(){
    
    queue<string> q;
    
    q.push("Basavaraj");
    q.push("M");
    q.push("Savadatti");
    
    cout<<"First Element: "<<q.front()<<"\n";
    q.pop();
    cout<<"First Element: "<<q.front()<<"\n";
    
    cout<<"Size of queue : "<<q.size()<<"\n";
 
    return 0;   
}