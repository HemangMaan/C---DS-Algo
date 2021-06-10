#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
typedef long long ll; 

int sum(int s,int e,vector<int> &mixtures){
    int ans=0;
    for(int i=s;i<=e;i++){
        ans+=mixtures[i];
        ans%=100;
    }
    return ans;
}

int MinMixtures(vector<int> &mixtures){
    int n = mixtures.size();
    vector<vector<ll> > dp(n,vector<ll>(n,0));
    for(int i=1;i<n;i++){
        int r=0,c=i;
        while(c<n){
            ll val = LONG_MAX;
            for(int j=r;j<c;j++){
                val = min(val,dp[r][j]+dp[j+1][c]+sum(r,j,mixtures)*sum(j+1,c,mixtures));
            }
            dp[r][c] = val;
            r++;c++;
        }
    }
    return dp[0][n-1];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> mixtures(n);
        for(int i = 0;i<n;i++){
            cin>>mixtures[i];
        }
        int ans = MinMixtures(mixtures);
        cout<<ans;
    }
    return 0;
}