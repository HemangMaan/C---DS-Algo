#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

int longestValidParentheses(string s) {
    stack<int> par;
    int ans=0;
    par.push(-1);
    for(int i=0;i<s.length();i++){
        if(s[i]=='('){
            par.push(i);
        }
        else{
            par.pop();
            if(par.empty()){
                par.push(i);
            }
            else{
                ans=max(ans,i-par.top());
            }
        }
    }
    return ans;
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
       string s;
       cin>>s;
       int ans = longestValidParentheses(s);
       cout<<ans<<endl;
   }
   return 0;
}