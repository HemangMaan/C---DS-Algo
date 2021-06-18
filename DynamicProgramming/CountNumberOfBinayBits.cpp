#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
typedef long long ll; 

int dp[1000][2] = {0};
int BinaryBits(int n,int prev){
    if(n==1){
        return 2;
    }
    if(dp[n][prev]!=0){
        return dp[n][prev];
    }
    if(prev==0){
        return dp[n][prev] = BinaryBits(n-1,0)+BinaryBits(n-1,1);
    }
    else{
        return dp[n][prev] = BinaryBits(n-1,0);
    }
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans = BinaryBits(n,0);
        cout<<ans<<endl;
    }
    return 0;
}