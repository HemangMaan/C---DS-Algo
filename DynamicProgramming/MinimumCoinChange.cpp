#include<bits/stdc++.h>
using namespace std;

int dp[100000] = {0}; 
int MinCoinChange(int n){
    static int coins[] = {1,7,10};
    if(n==0){
        return 0;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    int ans = INT_MAX,v;
    for(int i=2;i>=0;i--){
        if(n-coins[i]>=0){
            v=MinCoinChange(n-coins[i])+1;
            ans = min(ans,v);
        }
    }
    dp[n] = ans;
    return ans;
}

int main(){
    int n;
    cin>>n;
    int coincnt = MinCoinChange(n);
    cout<<coincnt<<endl;
}