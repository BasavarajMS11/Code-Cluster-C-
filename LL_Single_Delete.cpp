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
    int Delete(int index);
    int Length();
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

int LinkedList::Length(){
    Node *p=first;
    int l=0;

    while(p!=NULL){
        p=p->next;
        l+=1;
    }
    return l;
}

int LinkedList::Delete(int index){
    Node *p, *q=NULL;
    int x=-1;

    if(index<1 || index> Length()) //check for valid index
        return -1;
    if(index==1){
        p=first;
        first=first->next;
        x=p->data;
        delete p;
    }
    else{
        p=first;
        for(int i=0;i<index-1;i++){
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        delete p;
    }
    return x;
}

int main(){
    int A[]={2,4,6,8,10};

    LinkedList l(A,5);

    l.Display();

    cout<<l.Delete(3)<<endl;

    l.Display();

    return 0;
}

