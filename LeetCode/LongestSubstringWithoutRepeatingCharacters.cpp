#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

int lengthOfLongestSubstring(string s) {
    int curr=0,start=0,max=0;
    vector<int> visited(128,0);
    for(int i=0;i<s.size();i++){
        if(visited[s[i]]==0){
            curr++;
            visited[s[i]]++;
        }
        else{
            while(visited[s[i]]>0){
                visited[s[start]]--;
                start++;
            }
            visited[s[i]]++;
            curr=(i-start)+1;
        }
        if(curr>max){
            max=curr;
        }
    }
    return max;
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
       string s;
       cin>>s;
       int ans = lengthOfLongestSubstring(s);
       cout<<ans;       
   }
   return 0;
}