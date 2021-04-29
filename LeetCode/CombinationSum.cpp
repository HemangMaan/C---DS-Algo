#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 


void cs(vector<int>& candidates, int target,vector<vector<int> > &res,vector<int> &val,int next){
    if(target==0){
        res.push_back(val);
        return;
    }
    if(next==candidates.size() || target-candidates[next]<0){
        return;
    }
    val.push_back(candidates[next]);
    cs(candidates,target-candidates[next],res,val,next);
    val.pop_back();
    cs(candidates,target,res,val,next+1);
}
vector<vector<int> > combinationSum(vector<int>& candidates, int target) {
    vector<vector<int> > res;
    sort(candidates.begin(),candidates.end());
    vector<int> val;
    cs(candidates,target,res,val,0);
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
        vector<vector<int> > ans = combinationSum(candidates, target);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}