#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int dp[100001];
int Tiling(int n,int m){
    if(dp[n]!=-1)
        return dp[n]%mod;
    if(n<m||n==1)
        return dp[n]=1%mod;
    else if(n==m)
        return dp[n]=2%mod;
    return dp[n]=(Tiling(n-1,m) + Tiling(n-m,m))%mod;
}
int main(){
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        memset(dp,-1,sizeof(dp));
        cout<<Tiling(n,m)<<"\n";
    }
}