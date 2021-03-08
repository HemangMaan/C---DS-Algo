#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > updateMatrix(vector<vector<int>>& matrix) {
    int row = matrix.size();
    if(row==0){
        return matrix;
    }        
    int col = matrix[0].size();
    vector<vector<int> > dp(row,vector<int>(col,INT_MAX-10000));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j]==0){
                dp[i][j]=0;
            }
            else{
                if(i>0){
                    dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
                }
                if(j>0){
                    dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
                }
            }
        }
    }
    for(int i=row-1;i>=0;i--){
        for(int j=col-1;j>=0;j--){
            if(i<row-1){
                dp[i][j]=min(dp[i][j],dp[i+1][j]+1);
            }
            if(j<col-1){
                dp[i][j]=min(dp[i][j],dp[i][j+1]+1);
            }
        }
    }
    return dp;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<vector<int> > matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    vector<vector<int> > result = updateMatrix(matrix);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<result[i][j]<<",";
        }
        cout<<endl;
    }

}