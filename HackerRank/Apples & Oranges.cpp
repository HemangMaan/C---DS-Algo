#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int temp,i,s,t,a,b,m,n,ac=0,oc=0;
    vector<int> apples,oranges;
    cin>>s>>t>>a>>b>>m>>n;
    for(i=0;i<m;++i){
        cin>>temp;
        apples.push_back(temp);
    }
    for(i=0;i<n;++i){
        cin>>temp;
        oranges.push_back(temp);
    }
    for(i=0;i<m;++i){
        if((apples[i]+a)>=s && (apples[i]+a<=t)){
            ac++;
        }
        if((oranges[i]+b)<=t && (oranges[i]+b)<=t){
            oc++;
        }
    }
    cout<<ac<<endl<<oc<<endl;
    return 0;
}
