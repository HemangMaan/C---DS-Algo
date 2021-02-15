#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s;
        bool p=false,c=false,m=false;
        cin>>s;
        for(int i=0;i<3;i++){
            if(s[i]=='P'){
                p=true;
            }
            else if(s[i]=='C'){
                c=true;
            }
            else if(s[i]=='M'){
                m=true;
            }
        }
        if(p && c && m){
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}