#include<bits/stdc++.h>
using namespace std;
#define endl "\n" 

int jump(vector<int>& nums) {
    int n = nums.size();
    int maxjmp=nums[0],currjmp = nums[0];
    int jump=1;
    int i=0;
    while(i<n-1){
        maxjmp = max(maxjmp,i+nums[i]);
        if(currjmp==i){
            jump++;
            currjmp = maxjmp;
        }
        i++;
    }
    return jump;
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
        int ans = jump(nums);
        cout<<ans;
    }
    return 0;
}