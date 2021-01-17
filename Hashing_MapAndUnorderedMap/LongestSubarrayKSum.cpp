#include<bits/stdc++.h>
using namespace std;

int LongestSubarrayKSum(vector<int> &arr,int k){
    unordered_map<int, int> m;
    int pre=0,len=0;
    for(int i=0;i<arr.size();i++){
        pre+=arr[i];

        //if k is present or occured in cummulative sum
        if(pre==k){
            len = max(len,i+1);
        }
        //if k sum is present in map
        if(m.find(pre-k)!=m.end()){
            len = max(len,i-m[pre-k]);
        }
        //stores the first occurence in map
        else{
            m[pre]=i;
        }

    }
    return len;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,len=0;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cin>>k;
        len = LongestSubarrayKSum(arr,k);
        cout<<len<<endl;
    }
}