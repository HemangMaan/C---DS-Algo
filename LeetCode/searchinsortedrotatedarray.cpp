#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

int search(vector<int>& nums, int target) {
    int s=0,e=nums.size()-1,mid;
    while(s<=e){
        mid = s+(e-s)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(target<nums[mid] && target<nums[s] && nums[mid]>nums[s]){
            s=mid+1;
        }
        else if(target<nums[mid] && target<nums[s] && nums[mid]<nums[s]){
            e=mid-1;
        }
        else if(target<nums[mid] && target>nums[s]){
            e=mid-1;
        }
        else if(target>nums[mid] && target>nums[s] && nums[s]<nums[mid]){
            s=mid+1;
        }
        else if(target>nums[mid] && target>nums[s] && nums[s]>nums[mid]){
            e=mid-1;
        }
        else{
            if(nums[s]==target)
                return s;
            s++;
        }
    }
    return -1;
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
       int ans = search(nums,target);
       cout<<ans<<endl;
   }
   return 0;
}