#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    unordered_map<int,pair<int,int> > frog;  //Key:weight int:index int:L(Jump)
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        vector<int> w(n),l(n);
        for(int i=0;i<n;i++){
            cin>>w[i];
        }
        for(int i=0;i<n;i++){
            cin>>l[i];
        }
        for(int i=0;i<n;i++){
            frog.insert({w[i],make_pair(i+1,l[i])}); 
        }
        for(int i=2;i<=n;i++){
            while(frog[i].first<=frog[i-1].first){
                frog[i].first+=frog[i].second;
                cnt++;
            }
        }
        frog.clear();
        cout<<cnt<<endl;
    }
}