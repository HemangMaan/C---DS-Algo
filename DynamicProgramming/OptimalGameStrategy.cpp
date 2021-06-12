#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
typedef long long ll; 

vector<vector<int> > dp(1000,vector<int>(1000,0));
long long OptimalGameStrategy(vector<int> &scores,int i,int j){
    if(i>j){
        return 0;
    }
    if(dp[i][j]!=0){
        return dp[i][j];
    }
    long long ans1 = (scores[i]+min(OptimalGameStrategy(scores,i+2,j),OptimalGameStrategy(scores,i+1,j-1)));
    long long ans2 = (scores[j]+min(OptimalGameStrategy(scores,i+1,j-1),OptimalGameStrategy(scores,i,j-2)));
    long long ans = max(ans1,ans2);
    return dp[i][j] = ans;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> scores(n);
        for(int i=0;i<n;i++){
            cin>>scores[i];
        }
        int ans = OptimalGameStrategy(scores,0,n-1);
        cout<<ans<<endl;
    }
    return 0;
}