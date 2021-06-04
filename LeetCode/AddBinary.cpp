#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

string addBinary(string a, string b) {
    string res = "";
    int i = a.size()-1,j=b.size()-1,carry = 0;
    while(i>=0 || j>=0 || carry!=0){
        if(i>=0){
            carry +=a[i]-'0';
            i--;
        }
        if(j>=0){
            carry+=b[j]-'0';
            j--;
        }
        res = ((carry%2)==0?'0':'1') + res;
        carry/=2;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        cout<<addBinary(a,b);
    }
    return 0;
}