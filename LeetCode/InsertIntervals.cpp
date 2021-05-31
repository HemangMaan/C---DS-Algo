#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

vector<vector<int>> insertIn(vector<vector<int>>& intervals, vector<int>& newInterval) {
    vector<vector<int> > mergedInterval;
    intervals.push_back(newInterval);
    sort(intervals.begin(),intervals.end());
    for(int i=0;i<intervals.size();i++){
        if(mergedInterval.empty() || mergedInterval.back()[1]<intervals[i][0]){
            mergedInterval.push_back(intervals[i]);
        }
        else{
            mergedInterval.back()[1] = max(mergedInterval.back()[1],intervals[i][1]);
        }
    }
    return mergedInterval;
}

vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval){
    vector<vector<int> > merged;
    int i=0;
    while(i<intervals.size() && intervals[i][1]<newInterval[0]){
        merged.push_back(intervals[i]);
        i++;
    }
    while(i<intervals.size() && intervals[i][0]<=newInterval[1]){
        newInterval[0] = min(newInterval[0],intervals[i][0]);
        newInterval[1] = max(newInterval[1],intervals[i][1]);
        i++;
    }
    merged.push_back(newInterval);
    while(i<intervals.size()){
        merged.push_back(intervals[i]);
        i++;
    }
    return merged;
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
        vector<int> newInterval(2);
        cin>>newInterval[0]>>newInterval[1]; 
        vector<vector<int> > ans = insert(intervals,newInterval);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<",";
            }
            cout<<endl;
        }
    }
    return 0;
}