#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int> > minterval;
    sort(intervals.begin(),intervals.end());
    for(int i=0;i<intervals.size();i++){
        if(minterval.empty() || minterval.back()[1]<intervals[i][0]){
            minterval.push_back(intervals[i]);
        }
        else{
            minterval.back()[1] = max(minterval.back()[1],intervals[i][1]);
        }
    }
    return minterval; 
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int> > intervals(n,vector<int>(2));
        for(int i=0;i<n;i++){
            for(int j=0;j<2;j++){
                cin>>intervals[i][j];
            }
        }        
        vector<vector<int> > ans = merge(intervals);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[0].size();j++){
                cout<<ans[i][j]<<",";
            }
            cout<<endl;
        }
    }
    return 0;
}