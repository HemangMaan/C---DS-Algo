#include<bits/stdc++.h>
using namespace std;

void Subsequence(char str[],char ans[], int i,int j,int &cnt){
    if(str[i]=='\0'){
        ans[j]='\0';
        cout<<ans<<" ";
        cnt++;
        return;
    }
    Subsequence(str,ans,i+1,j,cnt);
    ans[j]=str[i];
    Subsequence(str,ans,i+1,j+1,cnt);
}

int main(){
    char str[1000],ans[1000];
    cin>>str;
    int cnt=0;
    Subsequence(str,ans,0,0,cnt);
    cout<<"\n"<<cnt;
}