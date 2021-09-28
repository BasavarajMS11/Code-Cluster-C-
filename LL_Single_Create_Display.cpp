#include<iostream>

using namespace std;

class Node{
public:
    int data;
    Node *next;
};

class LinkedList{
private:
    Node *first;

public:
    LinkedList(){
        first=NULL;
    }

    LinkedList(int A[],int n); //same as create using array
    ~LinkedList();

    void Display();

};

LinkedList::LinkedList(int A[], int n){
    Node *t,*last;

    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

LinkedList::~LinkedList(){
    Node *p=first;

    while(first){
        first=first->next;
        delete p;
        p=first;
    }
}

void LinkedList::Display(){
    Node *p=first;

    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}

int main(){
    int A[]={2,4,6,8,10};
    LinkedList l(A,5);
    l.Display();

    return 0;
}
