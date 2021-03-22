#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> res;
    for (unsigned int i=0; i<nums.size(); i++) {
        if ((i>0) && (nums[i]==nums[i-1]))
            continue;
        int l = i+1, r = nums.size()-1;
        while (l<r) {
            int s = nums[i]+nums[l]+nums[r];
            if (s>0) r--;
            else if (s<0) l++;
            else {
                res.push_back(vector<int> {nums[i], nums[l], nums[r]});
                while (l + 1 < r && nums[l]==nums[l+1]) l++;
                while (r - 1 > l && nums[r]==nums[r-1]) r--;
                l++; r--;
            }
        }
    }
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
       for(int i=0;i<n;i++){
           cin>>nums[i];
       }
       vector<vector<int> > ans = threeSum(nums);
       for(auto it:ans){
           for(auto jt:it){
               cout<<jt<<" ";
           }
           cout<<endl;
       }
   }
   return 0;
}