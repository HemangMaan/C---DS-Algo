#include<bits/stdc++.h>
using namespace std;

int LongestIncreasingSubsequence(vector<int> l){
    vector<int> dp(l.size()+1,1);
    int i=0,j=0,max=1;
    for(j=1;j<l.size();j++){
        for(i=0;i<j;i++){
            if(l[i]<l[j] && dp[i]>=dp[j]){
                dp[j]=1+dp[i];
                if(dp[j]>max){
                    max=dp[j];
                }
            }
        }
    }
    return max;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> l(n);
        for(int i=0;i<n;i++){
            cin>>l[i];
        }
        int res = LongestIncreasingSubsequence(l);
        cout<<res<<endl;
    }
}