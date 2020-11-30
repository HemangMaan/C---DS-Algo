#include<bits/stdc++.h>
using namespace std;

bool RatInMaze(char maze[][10],int path[][10],int i,int j,int m,int n){
    if(i==m && j==n){
        path[i][j]=1;
        //print path
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                cout<<path[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
        return true;
    }
    if(i>m || j>n)
        return false;
    if(maze[i][j]=='X')
        return false;
    
    path[i][j] = 1;
    bool rightSuccess = RatInMaze(maze,path,i,j+1,m,n);
    bool downSuccess = RatInMaze(maze,path,i+1,j,m,n);
    path[i][j]=0;
    if(rightSuccess || downSuccess){
        return true;
    }
    return false;

}

int main(){
    char maze[10][10] = {
        "0000",
        "00X0",
        "000X",
        "0X00",
    };
    int path[10][10] = {0};
    RatInMaze(maze,path,0,0,3,3);
    return 0;
}