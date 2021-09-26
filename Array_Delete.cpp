#include<iostream>
#include<stdlib.h>

using namespace std;

class Array{
    private:
        int *A;
        int size;
        int length;

        void swap(int *x,int *y);

    public:
        Array(){
            size=10;
            length=0;
            A=new int[size];
        }

        Array(int sz){
            size=sz;
            length=0;
            A=new int[size];
        }

        ~Array(){
            delete []A;
        }

        void Display();
        void Append(int x);
        int Delete(int index);

};

void Array::Display(){
    int i;
    cout<<"\nElements are\n";
    for(i=0;i<length;i++)
        cout<<A[i]<<" ";
}

void Array::Append(int x){
    if(length<size)
        A[length++]=x;
}

int Array::Delete(int index){
    int x=0;
    int i;
    if(index>=0 && index<length){
    x=A[index];
    for(i=index;i<length-1;i++)
        A[i]=A[i+1];
    length--;
    return x;
    }

    return 0;
}


int main(){
    Array *arr1;
    int ch,sz;
    cout<<"Enter Size of Array";
    cin>>sz;
    //int x,index;
    arr1=new Array(sz);
    arr1->Append(20);
    arr1->Append(10);
    arr1->Append(30);

    arr1->Display();
    arr1->Delete(1);
    arr1->Display();

    return 0;

}


