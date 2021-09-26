#include<iostream>

using namespace std;

int fun(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}

int main(){
    int v;
    v=fun(5);
    cout<<v<<endl;
    v=fun(5);
    cout<<v<<endl;
    return 0;

}
