#include<bits/stdc++.h>
using namespace std;

bool CowscanFit(vector<long long> &v,long long n,long long c,long long sep){
    int last_pos = v[0];
    int count =1;
    for(long long i=1;i<n;i++){
        if(v[i]-last_pos>=sep){
            last_pos = v[i];
            count++;
            if(count==c){
                return true;
            }
        }
    }
    return false;
}

int main(){
    long long t,n,c,ans=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>c;
        vector<long long> v(n);
        for(long long j=0;j<n;++j)
            cin>>v[j];
        sort(v.begin(),v.end());
        long long s = 0,e=v[n-1]-v[0],mid;
        while(s<=e){
            mid = (s+e)/2;
            bool isPossible = CowscanFit(v,n,c,mid);
            if(isPossible){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid-1;
            }
            
        }
        cout<<ans<<endl;
    }
}