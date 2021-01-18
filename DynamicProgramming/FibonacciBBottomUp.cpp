#include<bits/stdc++.h>
using namespace std;

int dp[100]={0};
int FibonacciBU(int n){
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]= dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    int res = FibonacciBU(n);
    cout<<res<<endl;
    return 0;
}