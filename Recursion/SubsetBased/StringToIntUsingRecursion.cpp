#include<bits/stdc++.h>
using namespace std;

int StringToInt(int idx,int n,string s){
    static int ans = 0;
    if(idx==n){
        return ans;
    }
    else
    {
        ans = ans*10+(s[idx]-'0');
        cout<<ans<<" ";
    }
    return StringToInt(++idx,n,s);
}

int main(){
    string s;
    cin>>s;
    int n = s.size();
    cout<<StringToInt(0,n,s);
    return 0;
}