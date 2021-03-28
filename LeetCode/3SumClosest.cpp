#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

int threeSumClosest(vector<int>& nums, int target) {
    if(nums.size() < 3) return 0;
    sort(nums.begin(),nums.end());
    int currMin=0,res =nums[0]+nums[1]+nums[2];
    for(int i=0;i<nums.size()-2;i++){
        if(i>0 && (nums[i]==nums[i-1])){
            continue;
        }
        int l=i+1;
        int r=nums.size()-1;
        while(l<r){
            currMin = nums[i]+nums[l]+nums[r];
            if(currMin==target) return currMin;
            if(abs(target-res)>abs(target-currMin)){
                res=currMin;
            }
            if(currMin>target){
                r--;
            }
            else{
                l++;
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
       int n, target;
       cin>>n>>target;
       vector<int> nums(n);
       for(int i=0;i<n;i++){
           cin>>nums[i];
       }
       int ans = threeSumClosest(nums,target);
       cout<<ans<<endl;
   }
   return 0;
}