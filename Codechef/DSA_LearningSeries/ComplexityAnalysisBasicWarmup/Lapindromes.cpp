#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,s1,s2;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;
        s1 = s.substr(0,s.length()/2);
        if(s.length()& 1)
            s2 = s.substr(s.length()/2+1,s.length()-1);
        else
            s2 = s.substr(s.length()/2,s.length()-1);
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}