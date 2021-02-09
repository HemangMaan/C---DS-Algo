#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int i,v,temp,n,d;
    cin>>n>>d;
    vector<int> a,b;
    b.resize(n);
    for(i=0;i<n;++i){
        cin>>v;
        a.push_back(v);
    }
    for (int i = 0; i < n; i++)
        b[(i+n-d)%n]=a[i];
    for(i=0;i<b.size();++i)
        cout<<b[i]<<" ";
    return 0;
}
