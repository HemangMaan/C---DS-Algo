#include<bits/stdc++.h>
using namespace std;

void Replacepi(char inp[],char ans[],int i,int j){
    if(inp[i]=='\0'){
        cout<<ans;
        return;
    }
    if(inp[i]=='p' && inp[i+1]=='i'){
        ans[j]='3';
        ans[j+1]='.';
        ans[j+2]='1';
        ans[j+3]='4';
        Replacepi(inp,ans,i+2,j+4);
    }
    else
    {
        ans[j]=inp[i];
        Replacepi(inp,ans,i+1,j+1);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        char inp[1000],ans[2005];
        cin>>inp;
        Replacepi(inp,ans,0,0);
    }
}