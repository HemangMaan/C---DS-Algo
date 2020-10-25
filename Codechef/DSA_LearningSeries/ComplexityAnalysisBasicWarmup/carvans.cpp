#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;++i){
        int c;
        int cnt=1;
        cin>>c;
        vector<int> s(c);
        for(int j=0;j<c;++j)
            cin>>s[j];
        int prev = s[0];
        for(int j=1;j<c;++j){
            if(prev>=s[j]){
                cnt++;
                prev = s[j];
            }
        }
    cout<<cnt<<"\n";
    }
}