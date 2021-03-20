#include<bits/stdc++.h>
using namespace std;

int n,k,p;
vector<vector<int> > s(51, vector<int> (31,0) );
vector<vector<int> > csum(51, vector<int> (31,0) );

int rec(int row,int taken, vector<vector<int> > &dp){
    if(taken==p){
        return 0;
    }
    if(taken >p || row>n){
        return -1e9;
    }
    if(dp[row][taken]!=-1){
        return dp[row][taken];
    }
    int ans= -1e9;
    for(int i=0;i<=k;i++){
        ans = max(ans, csum[row][i]+rec(row+1,taken+i,dp));
    }
    return dp[row][taken] = ans;
}

int main(){
    int t,tc=1,val;
    cin>>t;
    while(t--){
        vector<vector<int> > dp(51, vector<int> (51*30,-1) );
        cin>>n>>k>>p;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=k;j++){
                cin>>s[i][j];
                csum[i][j]=csum[i][j-1]+s[i][j];
            }
        }
        int ans = rec(1,0,dp);
        cout<<"Case #"<<tc++<<": "<<ans<<endl;
    }
    return 0;
}