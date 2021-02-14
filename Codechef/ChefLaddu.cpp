#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k,ans = INT_MAX;
        cin>>n>>k;
        vector<int> laddu(n);
        for(int i=0;i<n;i++){
            cin>>laddu[i];
        }
        k--;
        sort(laddu.begin(),laddu.end());
        for(int i=0;i<n-k;i++){
            //cout<<i<<" "<<i+k<<" "<<abs(laddu[i]-laddu[i+k])<<" | ";
            if(abs(laddu[i]-laddu[i+k])<ans){
                ans = abs(laddu[i]-laddu[i+k]);
            }
        }
        cout<<ans<<endl;
    }
}