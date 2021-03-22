#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> trk;
    for(int i=0;i<nums.size();i++){
        int complement = target-nums[i];
        if(trk.find(complement)!=trk.end()){
            return vector<int> {trk[complement],i};
        }
        trk[nums[i]]=i;
    }
    return vector<int> {};
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
       int n,target;
       cin>>n>>target;
       vector<int> nums(n);
       for(int i=0;i<n;i++){
           cin>>nums[i];
       }
       vector<int> ans=twoSum(nums,target);
       for(auto it:ans){
           cout<<it<<" ";
       }
   }
   return 0;
}