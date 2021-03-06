#include<bits/stdc++.h>
using namespace std;

int balancedStringSplit(string s) {
    int cnt=0,res=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='L'){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt==0){
            res++;
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int result = balancedStringSplit(s);
    cout<<result<<endl;
    return 0;
}