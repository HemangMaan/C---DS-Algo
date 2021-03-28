#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

bool isValid(string s) {
    stack<char> v;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            v.push(s[i]);
        }
        else{
            if(!v.empty() && ((s[i]==')' && v.top()=='(') || (s[i]==']' && v.top()=='[') || (s[i]=='}' && v.top()=='{'))){
                v.pop();
            }
            else{
                return false;
            }
        }
    }
    if(v.empty())
        return true;
    else
        return false;
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
       string s;
       cin>>s;
       if(isValid(s)){
           cout<<"true"<<endl;
       }   
       else{
           cout<<"false"<<endl;
       }
   }
   return 0;
}