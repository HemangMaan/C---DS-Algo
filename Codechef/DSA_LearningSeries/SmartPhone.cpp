#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    long long revf=0,revt = 0;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(long long i=0;i<n;i++){
        revt = v[i]*(n-i);
        if(revf<revt){
            revf = revt;
        }
    }
    cout<<revf;
}