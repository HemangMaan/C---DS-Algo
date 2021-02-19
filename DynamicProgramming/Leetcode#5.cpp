#include<bits/stdc++.h>
using namespace std;

int cntLength(int left,int right,string s){
    int len=0;
    while(left>=0 && right<s.length()){
        if(s[left]==s[right]){
            len = right-left+1;
            left--;
            right++;
        }
        else{
            break;
        }
    }
    return len;
}

string longestPalindrome(string s) {
    int fl=0,fr=0;
    string res;
    if(s.length()==0){
        return "";
    }
    for(int i=0;i<s.length();i++){
        int len1 = cntLength(i,i,s);
        int len2 = cntLength(i,i+1,s);
        if(len1>fr-fl){
            fl=i-len1/2;
            fr=i+len1/2;    
        }
        if(len2>fr-fl){
            fl=i+1-len2/2;
            fr=i+len2/2;
        }
    }
    res = s.substr(fl,fr-fl+1);
    return res;
}

int main(){
    string s;
    cin>>s;
    string res = longestPalindrome(s);
    cout<<res<<endl;
}