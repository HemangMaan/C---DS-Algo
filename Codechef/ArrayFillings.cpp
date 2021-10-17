#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 
typedef long long ll; 

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
    if(a.first==b.first)
        return (a.second > b.second);
    return a.first>b.first;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> p(m);
        for(int i=0;i<m;i++){
            int a,b;
            cin>>a>>b;
            p[i]= make_pair(a,b);
        }
        sort(p.begin(),p.end(),sortbysec);
        int j=0,sum=0;
        for(int i=0;i<n;i++){
            while((i+1)%p[j].second==0){
                j++;
            }
            if(j>=m){
                j=0;
                continue;
            }
            sum+=p[j].first;
            j=0;
        }
        cout<<sum<<endl;
    }
    return 0;
}