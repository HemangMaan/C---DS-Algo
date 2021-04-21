#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

void nextPermutation(vector<int>& nums) {
   next_permutation(nums.begin(),nums.end());
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
      nextPermutation(nums);
      for(auto it:nums){
         cout<<it;
      }
   }
   return 0;
}