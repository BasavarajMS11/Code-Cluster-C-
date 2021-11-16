#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    
    vector<int> v;
    
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    
    cout<<"Find element 5 using binary search "<<binary_search(v.begin(),v.end(),5)<<"\n"; //Checking if element is present
    
    //Returning lower or upper bound
    cout<<"Lower Bound or element present at index:"<<lower_bound(v.begin(),v.end(),5)-v.begin()<<"\n";
    cout<<"Upper Bound or element present at index:"<<upper_bound(v.begin(),v.end(),5)-v.begin()<<"\n";
    
    //Min Max
    int a=1,b=2;
    
    cout<<"Maximum: "<<max(a,b)<<"\n";
    cout<<"Minimum: "<<min(a,b)<<"\n";
    
    swap(a,b);
    cout<<"Value of a:"<<a<<" and b:"<<b<<"\n";
    
    //Reversing
    string str="basavaraj";
    reverse(str.begin(),str.end());
    cout<<"Reversed String: "<<str<<"\n";
    
    //Rotate
    cout<<"Before Rotate\n";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    rotate(v.begin(),v.begin()+1,v.end());
    
    cout<<"After Rotate\n";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    //Sort -> Intro Sort : Combination of Quick , Heap and Insertion sort
    sort(v.begin(),v.end());
    
    cout<<"After Sort\n";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<"\n";
    
    
    return 0;
}