#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

void cs2(vector<int> &candidates, int target, vector<vector<int> >& res,vector<int> &csum,int i){
    if(target==0){
        res.push_back(csum);
        return;
    }
    for(int j=i;j<candidates.size();j++){
        if(j>i && candidates[j]==candidates[j-1]) continue;
        int p = candidates[j];
        if(target-p<0) break;
        csum.push_back(p);
        cs2(candidates,target-p,res,csum,j+1);
        csum.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int> > res;
    vector<int> csum;
    sort(candidates.begin(),candidates.end());
    cs2(candidates,target,res,csum,0);
    return res;        
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        int n,target;
        cin>>n;
        vector<int> candidates(n);
        for(int i=0;i<n;i++){
            cin>>candidates[i];
        }
        cin>>target;
        vector<vector<int> > ans = combinationSum2(candidates, target);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}