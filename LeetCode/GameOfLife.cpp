#include<bits/stdc++.h>
using namespace std;

bool verify(int i,int j,vector<vector<int>>& board){
    int n = board.size(),m = board[0].size();
    int cnt = 0;
    vector<vector<int> > pos = {{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
    for(auto it: pos){
        int idxi = i+it[0];
        int idxj = j+it[1];
        if(idxi>=0 && idxj>=0 && idxi<n && idxj<m){
            if(board[idxi][idxj]==1){
                cnt++;
            }
        }
    }
    //Rule 1
    if(board[i][j]==1 && cnt<2){
        return true;
    }
    //Rule 3
    if(board[i][j]==1 && cnt>3){
        return true;
    }
    //Rule 4
    if(board[i][j]==0 && cnt==3){
        return true;
    }
    //Remaining cases
    return false;
}

void gameOfLife(vector<vector<int>>& board) {
    int n = board.size(),m = board[0].size();
    vector<vector<int> > c = board;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(verify(i,j,c)){
                bool inv = board[i][j];
                board[i][j]=!inv;
            }
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int> > board(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>board[i][j];
        }
    }
    gameOfLife(board);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}