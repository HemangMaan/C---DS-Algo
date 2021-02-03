#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    long int i,n,m,a,b,k,j=0,result=0;
    cin>>n>>m;
    vector <int> arr(n+1,0);
    for(i=0;i<m;i++){
        cin>>a>>b>>k;
        arr[a]+=k;
        if((b+1)<=n)
            arr[b+1]-=k;
    }
    for(i=1;i<=n;i++){
        j+=arr[i];
        if(result<j)
            result=j;
    }
    cout<<result;
    return 0;
}

