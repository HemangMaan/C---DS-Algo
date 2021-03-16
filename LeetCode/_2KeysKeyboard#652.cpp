#include<bits/stdc++.h>
using namespace std;

int minSteps(int n) {
    vector<int> dp(n+2,0);
    dp[1]=0;
    dp[2]=2;
    for(int i=3;i<=n;i++){
        dp[i]=i;
        int j=i/2;
        while(j>=1){
            if(i%j==0){
                dp[i]=min(dp[i],dp[j]+i/j);
                break;
            }
            j--;
        }
    }
    return dp[n];
}

int main(){
    int n;
    cin>>n;
    int result = minSteps(n);
    cout<<result<<endl;
    return 0;
}