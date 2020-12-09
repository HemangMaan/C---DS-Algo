#include<bits/stdc++.h>
using namespace std;

vector<int> AllIndices(vector<int> &arr,vector<int> &ans,int f,int i){
    if(arr[i]==f){
        ans.push_back(i);
    }
    if(i==arr.size()){
        return ans;
    }
    AllIndices(arr,ans,f,i+1);
    return ans;
}

int main(){
    int n,f;
    cin>>n;
    vector<int> arr(n),ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>f;
    vector<int> res = AllIndices(arr,ans,f,0);
    for(auto x:res){
        cout<<x<<" ";
    }
    return 0;
}