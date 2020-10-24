#include<bits/stdc++.h>
using namespace std;


int Sorting(vector<int> arr,int s,int e){
    int p =e;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid-1]<arr[mid] && arr[mid+1]<arr[mid]){
            return mid;
        }
        if(mid==0 && arr[mid+1]<arr[mid])
            return mid;
        if(arr[mid]>=arr[s]){
            s = mid+1;
        }
        else
        {
            e = mid-1;
        }
        
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    cout<<Sorting(v,0,n-1);
}