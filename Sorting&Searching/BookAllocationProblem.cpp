#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr,int n,int m,int mid){

    int stu=1,pr=0;
    for(int i=0;i<n;i++){
        
        if(pr+arr[i]>mid){
            stu++;
            pr=arr[i];
            if(stu>m){
                return false;
            }
        }
        else
        {
            pr+=arr[i];    
        }
    }
    return true;
    
}

int BookAllocation(int n,int m,vector<int> &arr,int e){

    int ans=INT_MAX;
    int s=arr[n-1];
    while(s<=e){
        int mid = (s+e)/2;
        if(isPossible(arr,n,m,mid)){
            ans=min(ans,mid);
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int n,m,max=0;
    for(int j=0;j<t;++j){
        cin>>n>>m;
        vector<int> a(n);
        for(int i=0;i<n;++i){
            cin>>a[i];
            max+=a[i];
        }
        cout<<BookAllocation(n,m,a,max)<<"\n";
    }
    return 0;
}