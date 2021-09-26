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
        void Reverse();
        void Reverse2();

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

void Array::Reverse(){
    int *B;
    int i,j;
    B=(int *)malloc(length*sizeof(int));
    for(i=length-1,j=0;i>=0;i--,j++)
        B[j]=A[i];
    for(i=0;i<length;i++)
        A[i]=B[i];
}

void Array::Reverse2(){
    int i,j;
    for(i=0,j= length-1;i<j;i++,j--){
        swap(& A[i],& A[j]);
    }
}


int main(){
    Array *arr1;
    int ch,sz=4;

    //int x,index;
    arr1=new Array(sz);
    arr1->Append(10);
    arr1->Append(20);
    arr1->Append(30);
    arr1->Append(40);

    arr1->Display();
    arr1->Reverse2();
    cout<<"\n\nAfter Reversing "<<endl;
    arr1->Display();

    return 0;

}




