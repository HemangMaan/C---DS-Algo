#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
#define long long "ll" 

int matrixChainMultiplication(vector<int> &matrix){
    int n = matrix.size()-1;
    vector<vector<int> > dp(n,vector<int>(n,0));
    for(int i = 1;i<n;i++){
        int r = 0,c=i;
        while(c<n){
            int val = INT_MAX;
            for(int pivot = r;pivot<c;pivot++){
                val = min(val,dp[r][pivot] + dp[pivot+1][c] + matrix[r]*matrix[pivot+1]*matrix[c+1]);
            }
            dp[r][c] = val;
            r++;c++;
        }
    }
    return dp[0][n-1];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> matrix(n);
        for(int i=0;i<n;i++){
            cin>>matrix[i];
        }
        int ans = matrixChainMultiplication(matrix);
        cout<<ans;
    }
    return 0;
}