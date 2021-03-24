#include<bits/stdc++.h>
using namespace std;
#define endl "\n"

int GoodnessScore(string s,int k){
    int n = s.size();
    int sptr=0,eptr=n-1;
    while(sptr<eptr){
        if(s[sptr]!=s[eptr]){
            k--;
        }
        sptr++;
        eptr--;
    }
    
    return abs(k);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        int ans=0,n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ans = GoodnessScore(s,k);
        cout<<"Case #"<<tc++<<": "<<ans<<endl;
    }
    return 0;
}