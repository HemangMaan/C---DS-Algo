#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int RainWater(vector<int> &arr,int n){
    vector<int> left;
    vector<int> right;
    left.reserve(n);
    right.reserve(n);
    left[0] = arr[0];
    for(int i=1;i<n;i++){
        left[i] = max(left[i-1],arr[i]);
    }
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;--i){
        right[i]= max(right[i+1],arr[i]);
    }
    int res=0;
    for(int i=0;i<n;++i){
        res= res+(min(left[i],right[i])-arr[i]);
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    arr.reserve(n);
    for(int i=0;i<n;++i){
        int v;
        cin>>v;
        arr.push_back(v);
    }
    cout<<RainWater(arr,n);
    return 0;
}