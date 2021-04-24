#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

vector<int> searchRange(vector<int>& nums, int target) {
   vector<int>::iterator lb = lower_bound(nums.begin(),nums.end(),target);
   vector<int>::iterator ub = upper_bound(nums.begin()+(lb-nums.begin()),nums.end(),target);
   if((ub-nums.begin())==(lb-nums.begin()))
      return vector<int>{-1,-1};
   else
      return vector<int>{lb-nums.begin(),ub-nums.begin()-1};
}

int main(){
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);cout.tie(NULL);
   int t,tc=1;
   cin>>t;
   while(t--){
      int n,target;
      cin>>n;
      vector<int> nums(n);
      for(int i=0;i<n;i++){
         cin>>nums[i];
      }
      cin>>target;
      vector<int> ans = searchRange(nums,target);
      for(auto it:ans){
         cout<<it<<" ";
      }
   }
   return 0;
}