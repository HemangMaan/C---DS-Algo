#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

bool IsomorphicString(string s1,string s2){
    unordered_map<char,int> m;
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        if(IsomorphicString(s1,s2)){
            cout<<"true";
        }
        else{
            cout<<"false";
        }
    }
    return 0;
}