#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b){
    return a>b;
}

int main(){
    int t,n,m,s1,s2,j=0;
    cin>>t;
    while(t--){
        s1=0;s2=0;j=0;
        cin>>n>>m;
        vector<int> a(n),b(m);
        for(int i=0;i<n;i++){
            cin>>a[i];
            s1+=a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
            s2+=b[i];
        }
        sort(b.begin(),b.end(),comp);
        sort(a.begin(),a.end());
        int swaps = min(a.size(),b.size());
        while(s1<=s2 && swaps--){
            s1=s1-a[j]+b[j];
            s2=s2-b[j]+a[j];
            swap(a[j],b[j]);
            j++;
        }
        if(s1>s2){
            cout<<j<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}