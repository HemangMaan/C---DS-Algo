#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

int maxSubArray(vector<int>& nums) {
    if(nums.size()==0) return 0;
    int maxSum=nums[0],currSum=0;
    for(int i=0;i<nums.size();i++){
        currSum+=nums[i];
        if(currSum>maxSum)
            maxSum = currSum;
        if(currSum<0) currSum=0;
    }
    return maxSum;
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
        int ans = maxSubArray(nums);
        cout<<ans;
    }
    return 0;
}