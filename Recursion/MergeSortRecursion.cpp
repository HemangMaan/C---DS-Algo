#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int> &a,int s,int e){
    int mid = (s+e)/2;
    int i=s;
    int j= mid+1;
    int k = s;
    vector<int> temp(100);

    while(i<=mid && j<=e){
        if(a[i]<a[j]){
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++]=a[j++];
        }
    }
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=e){
        temp[k++]=a[j++];
    }
    for(int i=s;i<=e;i++){
        a[i] = temp[i];
    }
}

void Mergesort(vector<int> &arr,int s,int e){
    
    if(s>=e){
        return;
    }
    int mid = (s+e)/2;
    Mergesort(arr,s,mid);
    Mergesort(arr,mid+1,e);
    Merge(arr,s,e);
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    Mergesort(arr,0,n-1);
    for(auto it:arr){
        cout<<it<<" ";
    }
    return 0;
}