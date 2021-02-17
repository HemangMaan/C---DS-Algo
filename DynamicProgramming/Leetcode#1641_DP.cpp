#include<bits/stdc++.h>
using namespace std;

int countVowelStrings(int n) {
    vector<int> dp(5,1);
    int cnt=0;
    if(n==1){
        return 5;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<5;j++){
            dp[j]=dp[j]+dp[j-1];
        }
    }
    for(auto it:dp){
        cnt+=it;
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    int res = countVowelStrings(n);
    cout<<res<<endl;
    return 0;
}