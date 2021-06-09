#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

int CellMitosis(int n,int x, int y,int z){
    vector<int> dp(n+2,0);
    dp[2]=min(x,y);
    if(n%2==0){
        for(int i=3;i<=n;i++){
            dp[i]=min(dp[i-1]+y,dp[i/2]+x);
        }
    }
    else
    {
        for(int i=3;i<=n;i++){
            dp[i]=min(dp[i-1]+y,dp[(i+1)/2]+x+z);
        }
    }
    return dp[n];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        int n,x,y,z;
        cin>>n>>x>>y>>z;
        int ans = CellMitosis(n,x,y,z);
        cout<<ans;
    }
    return 0;
}