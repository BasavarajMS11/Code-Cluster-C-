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
        Array* Inter(Array arr2);

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

Array* Array::Inter(Array arr2){
    int i,j,k;
    i=j=k=0;
    Array *arr3=new Array(length+arr2.length);
    while(i<length && j<arr2.length){
        if(A[i]<arr2.A[j])
            i++;
        else if(arr2.A[j]<A[i])
            j++;
        else if(A[i]==arr2.A[j]){
            arr3->A[k++]=A[i++];
            j++;
        }
    }
    arr3->length=k;
    return arr3;
}


int main(){
    Array *arr1,arr2,*arr3;
    int ch,sz=5;

    //int x,index;
    arr1=new Array(sz);
    arr1->Append(10);
    arr1->Append(20);
    arr1->Append(30);
    arr1->Append(40);
    arr1->Display();

    //arr2=new Array(sz);
    arr2.Append(10);
    arr2.Append(25);
    arr2.Append(30);
    arr2.Append(45);
    arr2.Display();

    cout<<"\n\nIntersection of Array1 and Array2"<<endl;
    arr3=arr1->Inter(arr2);
    arr3->Display();

    return 0;

}



