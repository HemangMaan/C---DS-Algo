#include<bits/stdc++.h>
using namespace std;

bool find132pattern(vector<int>& nums) {
    int n = nums.size();
    int s3=INT_MIN;
    stack<int> s;
    for(int i=n-1;i>=0;i--){
        if(nums[i]<s3) return true;
        else{
            while(!s.empty() && nums[i]>s.top()){
                s3=s.top();s.pop();
            }
        }
        s.push(nums[i]);
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        if(find132pattern(nums)){
            cout<<"True"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
    }
    return 0;
}