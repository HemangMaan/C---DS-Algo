#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long n,b;
        cin>>n>>b;
        vector<long> a(n);
        for(long i=0;i<n;i++){
            cin>>a[i];
        }
        long sum=a[0],highest=0,idx=0;
        for(long i=1;i<n;i++){
            if(sum<=b){
                highest = max(highest,sum);
            }
            while(idx<i && sum+a[i]>b){
                sum-=a[idx];
                idx++;
            }
            sum+=a[i];
            //cout<<sum<<" "<<item<<endl;
        }
        if(sum<=b){
            highest = max(highest,sum);
        }
        cout<<highest<<endl;
    }

}