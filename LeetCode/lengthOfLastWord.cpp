#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

int lengthOfLastWord(string s) {
    int size = s.length();
    int len=0;
    bool flag = false;
    for(int i=size-1;i>=0;i--){
        if(flag && s[i]==' '){
            return len;
        }
        else if(s[i]!=' '){
            flag = true;
            len++;   
        }
    }
    return len;
}

int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        string s;
        cin.clear();
        cin.sync();
        getline(cin,s);
        cout<<s;
        int ans = lengthOfLastWord(s);
        cout<<ans;
    }
    return 0;
}