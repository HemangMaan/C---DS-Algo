#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

int searchInsert(vector<int>& nums, int target) {
    int s=0,l = nums.size()-1,mid;
    if(l==0){
        if(target<=nums[0])
            return 0;
        else
            return 1;
    }
    while(s<=l){
        mid = s+(l-s)/2;
        if(target==nums[mid]){
            return mid;
        }
        if(target<nums[mid]){
            l=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return s;
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
       int ans = searchInsert(nums,target);
       cout<<ans<<endl;
   }
   return 0;
}