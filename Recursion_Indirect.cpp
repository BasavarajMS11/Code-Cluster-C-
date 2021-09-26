#include<iostream>

using namespace std;

void funA(int n);

void funB(int n){
    if(n>1){
        cout<<n<<endl;
        funA(n/2);
    }
}

void funA(int n){
    if(n>0){
        cout<<n<<endl;
        funB(n-1);
    }
}



int main(){
    funA(20);
    return 0;
}
