// Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right,
// which minimizes the sum of all numbers along its path.
// Note: You can only move either down or right at any point in time.
// Input: grid = [[1,3,1],[1,5,1],[4,2,1]]
// Output: 7
// Explanation: Because the path 1 → 3 → 1 → 1 → 1 minimizes the sum.
#include<bits/stdc++.h>
using namespace std;

int minPathSum(vector<vector<int>>& grid) {
    int m = grid.size(),n=grid[0].size();
    vector<vector<int> > dp(m,vector<int>(n,0));
    dp[0][0]=grid[0][0];
    for(int i=1;i<m;i++){
        dp[i][0]=dp[i-1][0]+grid[i][0];
    }
    for(int j=1;j<n;j++){
        dp[0][j]=dp[0][j-1]+grid[0][j];
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            dp[i][j]=min((dp[i-1][j]+grid[i][j]),(dp[i][j-1]+grid[i][j]));
        }
    }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return dp[m-1][n-1];
}

int main(){
    int n,m;
    cin>>m>>n;
    vector<vector<int> > grid(m,vector<int>(n,0));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    int result = minPathSum(grid);
    cout<<result<<endl;
    return 0;
}