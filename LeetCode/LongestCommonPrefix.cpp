#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

string longestCommonPrefix(vector<string>& strs) {
    string ans = "";
    if(strs.size()==0)  return ans;
    string chk = strs[0];
    for(int j=0;j<chk.size();j++){
        int i=1;
        for(;i<strs.size() && strs[i].size()>j;i++){
            if(chk[j]!=strs[i][j]){
                return ans;
            }
        } 
       if(i==strs.size()) ans+=chk[j];
    }
    return ans;
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       vector<string> s(n);
       for(int i=0;i<n;i++){
           cin>>s[i];
       }
       string ans = longestCommonPrefix(s);
       cout<<ans<<endl;
   }
   return 0;
}