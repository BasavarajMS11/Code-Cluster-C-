/*
1 2 3
4 5 6
7 8 9

Spiral Order Traversal: 1 2 3 6 9 8 7 4 5
variables: row_start, row_end, column_start, column_end
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

    int row_start=0, row_end=m-1, column_start=0,column_end=n-1;

    while(row_start<=row_end && column_start<=column_end){
        //for row_start
        for(int col=column_start;col<=column_end;col++){
            cout<<arr[row_start][col]<<" ";
        }

        row_start++;

        //for col_end
        for(int row=row_start;row<=row_end;row++){
            cout<<arr[row][column_end]<<" ";
        }
        column_end--;

        //for row_end
        for(int col=column_end;col>=column_start;col--){
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        //for col_start
        for(int row=row_end;row>=row_start;row--){
            cout<<arr[row][column_start]<<" ";
        }
        column_start++;
    }

    return 0;
}

