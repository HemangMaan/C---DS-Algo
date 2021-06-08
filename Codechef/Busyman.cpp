#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

bool comp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}

int BusyMan(vector<pair<int, int> > &activities){
    if(activities.empty()) return 0;
    sort(activities.begin(),activities.end(),comp);
    int cnt = 1;
    pair<int,int> selected = activities[0];
    for(int i=1;i<activities.size();i++){
        if(selected.second<=activities[i].first){
            cnt++;
            selected = activities[i];
        }
    }
    return cnt;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int> > activities(n);
        for(int i=0;i<n;i++){
            cin>>activities[i].first;
            cin>>activities[i].second;
        }
        int ans = BusyMan(activities);
        cout<<ans<<endl;
    }
    return 0;
}