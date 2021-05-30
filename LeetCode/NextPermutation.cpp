#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

void permutations(vector<int> &nums,int begin,vector<vector<int> > &ans){
    if(begin==nums.size()){
        ans.push_back(nums);
    }
    for(int i=begin;i<nums.size();i++){
        swap(nums[begin],nums[i]);
        permutations(nums,begin+1,ans);
        swap(nums[begin],nums[i]);
    }
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int > > ans;
    permutations(nums,0,ans);
    return ans;        
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
        vector<vector<int> > ans = permute(nums);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}