#include<bits/stdc++.h>
using namespace std;

bool isSafe(char board[][10],int i,int j,int n){
    //checking columns
    for(int row = 0;row<i;++row){
        if(board[row][j]==1)
            return false;
    }
    //checking diagonal backward
    int x = i,y=j;
    while(x>=0&&y>=0){
        if(board[x][y]==1)
            return false;
        x--;
        y--;
    }
    //checking diagonal forward
    x = i;y=j;
    while(x>=0&&y<n){
        if(board[x][y]==1)
            return false;
        x--;
        y++;
    }
    return true;
}

bool NQueen(char board[][10],int i,int n){
    if(i==n){
        //Base case hit - placed all queens
        //print the queens
        for(int row = 0;row<n;row++){
            for(int col = 0;col<n;col++){
                if(board[row][col]==1){
                    cout<<" Q ";
                }
                else
                {
                    cout<<" _ ";
                }
            }
            cout<<endl;
        }
        return true;
    }
    for(int j=0;j<n;j++){
        if(isSafe(board,i,j,n)){
            board[i][j]=1;
            bool QueenPlaced = NQueen(board,i+1,n);
            if(QueenPlaced){
                return true;
            }
            board[i][j]=0;
        }
    }
    return false;
}

int main(){
    char board[10][10]= {0};
    int n;
    cin>>n;
    NQueen(board,0,n);
}