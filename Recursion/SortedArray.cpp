#include<bits/stdc++.h>

using namespace std;

bool IsSorted(int s,int n,vector<int> arr){
    if(arr[s]>arr[s+1]){
        return false;
    }
    ++s;
    if(s<n-1){
        return IsSorted(s,n,arr);
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    if(IsSorted(0,n,arr))
        cout<<"true";
    else
    {
        cout<<"false";
    }
    return 0;
}