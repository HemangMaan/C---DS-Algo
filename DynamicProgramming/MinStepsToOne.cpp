#include<bits/stdc++.h>
using namespace std;

int dp[100000]={0};
int MinStepToOneTD(int n){
    int x=INT_MAX,y=INT_MAX,z=INT_MAX;
    if(n==1){
        return 0;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    if(n%3==0){
        x=MinStepToOneTD(n/3);
    }
    if(n%2==0){
        y=MinStepToOneTD(n/2);
    }
    z=MinStepToOneTD(n-1);
    return dp[n]=(min(x,min(y,z))+1);
}

int main(){
    int n;
    cin>>n;
    int res = MinStepToOneTD(n);
    cout<<res<<endl;
    return 0;
}