#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

int firstMissingPositive(vector<int>& nums) {
    int n = nums.size();
    if(n==1 && nums[0]==1) return 2;
    if(n==0) return 1;
    for(int i=0;i<n;i++)
        while(nums[i]<=n && nums[i]>0 && nums[nums[i]-1]!=nums[i])
            swap(nums[i],nums[nums[i]-1]);
    for(int i=0;i<n;i++)
        if(nums[i]!=i+1) return i+1;
    return n+1;
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
        int ans = firstMissingPositive(nums);
        cout<<ans;
    }
    return 0;
}