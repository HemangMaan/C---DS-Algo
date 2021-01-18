#include<bits/stdc++.h>
using namespace std;


long dp[100000] = {0};
long fabonacci(long n){
    if(n==1 || n==0){
        return n;
    }

    if(dp[n]!=0){
        return dp[n];
    }

    long ans = fabonacci(n-1) + fabonacci(n-2);
    return dp[n]=ans;
}

int main(){
    long n;
    cin>>n;
    long res = fabonacci(n);
    cout<<res<<endl;
    return 0;
}