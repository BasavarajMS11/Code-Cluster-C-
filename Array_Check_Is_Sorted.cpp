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
        int isSorted();

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

void Array::swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int Array::isSorted(){
    int i;
    for(i=0;i<length-1;i++){
        if(A[i]>A[i+1])
            return 0;
    }
    return 1;
}


int main(){
    Array *arr1;
    int ch,sz=6;

    //int x,index;
    arr1=new Array(sz);
    arr1->Append(10);
    arr1->Append(20);
    arr1->Append(30);
    arr1->Append(40);

    arr1->Display();
    if(arr1->isSorted()){
        cout<<"\n\nArray is Sorted "<<endl;
    }

    return 0;

}





