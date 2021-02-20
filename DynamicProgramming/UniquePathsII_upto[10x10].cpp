// A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).
// The robot can only move either down or right at any point in time. The robot is trying to reach 
// the bottom-right corner of the grid (marked 'Finish' in the diagram below).
// Now consider if some obstacles are added to the grids. How many unique paths would there be?
// An obstacle and space is marked as 1 and 0 respectively in the grid.

// Input: obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
// Output: 2
// Explanation: There is one obstacle in the middle of the 3x3 grid above.
// There are two ways to reach the bottom-right corner:
// 1. Right -> Right -> Down -> Down
// 2. Down -> Down -> Right -> Right 

#include<bits/stdc++.h>
using namespace std;

int dp[10][10] = {0};
int TopDown(vector<vector<int>>& obstacleGrid,int i,int j,int m,int n){
    int down=0,right=0;
    if(i==m-1 && j==n-1 && obstacleGrid[i][j]!=1){
        return 1;
    }
    if(obstacleGrid[i][j]==1){
        return 0;
    }
    if(dp[i][j]!=0){
        return dp[i][j];
    }
    if(i<m-1){
        down += TopDown(obstacleGrid,i+1,j,m,n);
    }
    if(j<n-1){
        right += TopDown(obstacleGrid,i,j+1,m,n);
    }
    return dp[i][j]=(down+right);
}

int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
    int m=obstacleGrid.size(),n=obstacleGrid[0].size();
    return TopDown(obstacleGrid,0,0,m,n);
}

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int> > obstacleGrid(m);
    vector<int> row(n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>row[j];
        }
        obstacleGrid[i] = row;
    }
    int res = uniquePathsWithObstacles(obstacleGrid);
    cout<<res<<endl;
    return 0;
}