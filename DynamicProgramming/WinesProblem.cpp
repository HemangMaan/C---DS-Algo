#include<bits/stdc++.h>
using namespace std;

int dp[][10] = {0};
int WinesProblem(int *b,int i,int j,int y){
    if(i>j){
        return 0;
    }
    if(dp[i][j]!=0){
        return dp[i][j];
    }
    int s = b[i]*y + WinesProblem(b,i+1,j,y+1);
    int e = b[j]*y + WinesProblem(b,i,j-1,y+1);
    dp[i][j] = max(s,e);
    return dp[i][j]; 
}

int main(){
    int n;
    cin>>n;
    int bottles[n];
    for(int i=0;i<n;i++){
        cin>>bottles[i];
    }
    int price = WinesProblem(bottles,0,n-1,1);
    cout<<price<<endl;
    return 0;
}