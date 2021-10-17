#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

void calcPer(unordered_map<int,int> &can,int n,vector<int> &val,vector<vector<int> > &res){
    if(val.size()==n){
        res.push_back(val);
    }
    for(auto it: can){
        int v = it.first;
        int cnt = it.second;
        if(cnt==0) continue;
        val.push_back(v);
        can[v]--;
        calcPer(can,n,val,res);
        can[v]++;
        val.pop_back();
    }
}

vector<vector<int>> permuteUnique(vector<int>& nums) {
    unordered_map<int, int> can;
    int n = nums.size();
    for(int i=0;i<n;i++){
        can[nums[i]] = ++can[nums[i]];
    }
    vector<vector<int> > res;
    vector<int> val;
    calcPer(can,n,val,res);
    return res;
}   

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    int t,tc=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
            cin>>nums[i];
        vector<vector<int>> ans = permuteUnique(nums);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}