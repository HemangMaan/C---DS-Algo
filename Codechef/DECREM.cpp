#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,l,r,n;
    cin>>t;
    for(int i=0;i<t;++i){
        cin>>l>>r;
        if(l<=1){
            cout<<"-1"<<"\n";
            continue;
        }
        n=r;
        if(r%l<r-l){
            cout<<"-1";
        }
        else{
            cout<<r;
        }
    }
}