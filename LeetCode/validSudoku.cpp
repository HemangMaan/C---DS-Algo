#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

bool isValidSudoku(vector<vector<char>>& board) {
    unordered_map<int,int> row[9];
    unordered_map<int,int> col[9];
    unordered_map<int,int> box[9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(board[i][j]!='.'){
                int n = board[i][j]-'0';
                int b = (i/3)*3+j/3;
                row[i][n]++;
                col[j][n]++;
                box[b][n]++;
                if(row[i][n]>1 || col[j][n]>1 || box[b][n]>1){
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
       vector<vector<char> > board(9,vector<char>(9));
       for(int i=0;i<9;i++){
           for(int j=0;j<9;j++){
               cin>>board[i][j];
           }
       }
       if(isValidSudoku(board)){
           cout<<"true"<<endl;
       }
       else
       {
           cout<<"false"<<endl;
       }
   }
   return 0;
}