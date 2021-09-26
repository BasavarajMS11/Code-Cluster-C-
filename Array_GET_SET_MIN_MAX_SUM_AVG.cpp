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
        int Get(int index);
        void Set(int index,int x);
        int Min();
        int Max();
        int Sum();
        float Avg();

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

int Array::Get(int index){
    if(index>=0 && index<length)
        return A[index];
    return -1;
}

void Array::Set(int index,int x){
    if(index>=0 && index< length)
        A[index]=x;
}

int Array::Min(){
    int min=A[0];
    int i;
    for(i=1;i<length;i++){
        if(A[i]<min)
            min=A[i];
    }
    return min;
}

int Array::Max(){
    int max=A[0];
    int i;
    for(i=1;i<length;i++){
        if(A[i]>max)
            max=A[i];
    }
    return max;
}


int Array::Sum(){
    int s=0;
    int i;
    for(i=0;i<length;i++)
        s+=A[i];
    return s;
}

float Array::Avg(){
    return (float)Sum()/length;
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
    cout<<"\n\nGET element at index 1 "<<arr1->Get(1)<<endl;
    cout<<"\n\nSET element at index 2 to 35 "<<endl;
    arr1->Set(2,35);
    cout<<"\n\nMinimum element in the array "<<arr1->Min()<<endl;
    cout<<"\n\nMaximum element in the array "<<arr1->Max()<<endl;
    cout<<"\n\nSum of elements in the array "<<arr1->Sum()<<endl;
    cout<<"\n\nAvg of elements in the array "<<arr1->Avg()<<endl;
    arr1->Display();

    return 0;

}



