/*
Declaration:
------------
int arr[n][m];
bool arr[n][m];
char arr[n][m];
float arr[n][m];
*/

#include<iostream>

using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix is:\n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    int key;
    cout<<"\nEnter Key to Search:";
    cin>>key;

    bool flag=false;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]==key){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }

    if(flag){
        cout<<"Element is found\n";
    }
    else{
        cout<<"Element not found\n";
    }
}

