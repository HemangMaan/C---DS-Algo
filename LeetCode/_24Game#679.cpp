#include<bits/stdc++.h>
using namespace std;

bool judgePoint24(vector<int>& nums) {
    int s = nums.size();
    vector<int> arr,possibleOperations;
    if(nums.size()==1 && nums[0]-24<0.001){
        return true;
    }
    // for(auto it:nums){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            if(i!=j){
                for(int k=0;k<s;k++){
                    if(k!=i && k!=j){
                        arr.push_back(nums[k]);
                    }
                }
                int c1 = nums[i];
                int c2 = nums[j];
                possibleOperations.push_back(c1+c2);
                possibleOperations.push_back(c1-c2);
                possibleOperations.push_back(c2-c1);
                possibleOperations.push_back(c1*c2);
                if(c1!=0){
                    possibleOperations.push_back(c2/c1);
                }
                if(c2!=0){
                    possibleOperations.push_back(c1/c2);
                }
                for(auto it: possibleOperations){
                    arr.push_back(it);
                    judgePoint24(arr);
                    arr.pop_back();
                }
                arr.clear();
            }
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums(4);
    for(int i=0;i<4;i++){
        cin>>nums[i];
    }
    if(judgePoint24(nums)){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}