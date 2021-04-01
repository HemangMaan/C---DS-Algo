#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

vector<string> result;
void parenthesis(int i,int j,int n,char *ans){
    if(i+j==2*n){
        ans[i+j]='\0';
        result.push_back(ans);
    }
    if(i<n){
        ans[i+j]='(';
        parenthesis(i+1,j,n,ans);
    }
    if(j<i){
        ans[i+j]=')';
        parenthesis(i,j+1,n,ans);
    }
}

vector<string> generateParenthesis(int n) {
    char ans[100];
    parenthesis(0,0,n,ans);
    return result;
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<string> ans = generateParenthesis(n);
       for(auto it: ans){
           cout<<it<<endl;
       }
   }
   return 0;
}