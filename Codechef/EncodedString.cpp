#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n=0,h=16,l=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            int val=s[i]-'0';
            if(val==1){
                l=(h-l)/2+l;
            }   
            else
            {
                h = (h+l)/2;
            }
            if(i%4==3 && i>1){
                cout<<'a'+h;
                l=0;
                h=16;
            }    
        }
        cout<<"\n";
    }
}