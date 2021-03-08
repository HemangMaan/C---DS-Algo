#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int grp = 0;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1' && s[i-1]!='1'){
                grp++;
            }
        }
        cout<<grp<<endl;
    }
}