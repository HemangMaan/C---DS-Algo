#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
typedef long long ll; 

int dp[1000][1000];
ll Knapsack(ll n,ll s,vector<ll> &l,vector<ll> &p){
    if(n==0 || s==0){
        return 0;
    }
    if(dp[n][s]!=-1){
        return dp[n][s];
    }
    ll inc =0;
    ll exc =0;
    if(s>=l[n-1]){
        inc = p[n-1] + Knapsack(n-1,s-l[n-1],l,p);
    }
    exc = Knapsack(n-1,s,l,p);
    return dp[n][s] = max(inc,exc);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        ll n,s;
        cin>>n>>s;
        vector<ll> l(n),p(n);
        for(int i=0;i<n;i++){
            cin>>l[i];
        }
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        memset(dp, -1, sizeof(dp));
        ll ans = Knapsack(n,s,l,p);
        cout<<ans;
    }
    return 0;
}