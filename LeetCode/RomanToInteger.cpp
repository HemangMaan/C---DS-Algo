#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

int romanToInt(string s) {
    unordered_map<char,int> roman = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };

    int ans=roman[s.back()];
    for(int i=s.size()-2;i>=0;i--){
        if(s[i]<s[i+1]){
            ans-=s[i];
        }
        else{
            ans+=roman[s[i]];
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
       int ans = romanToInt(s);
       cout<<ans<<endl;
   }
   return 0;
}