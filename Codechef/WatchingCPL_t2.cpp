//This program have edge cases not solved and getting TLE

#include<bits/stdc++.h>
using namespace std;

bool comp(int a,int b){
    return a>b;
}

int box = 1000000;

void WatchingCPL(vector<int> &h,int *idx,int i,int s1,int s2,int n,int k,int cnt){
    if(s1>=k){
        cout<<"Values for s1 ";
        for(int p=0;p<n;p++){
            if(idx[p]==1)
            cout<<h[p]<<" ";
        }
        cout<<"sum1 "<<s1<<endl;
        cout<<"Values for s2 ";
        for(int j=0;j<n;j++){
            if(idx[j]==0){
                s2+=h[j];
                cout<<h[j]<<" ";
                cnt++;
            }
            if(s2>=k){
                break;
            }
        }
        cout<<"sum2 "<<s2<<endl;
        cout<<cnt<<endl;
        if(s2>=k)
            box = min(cnt,box);
        return;
    }
    if(i>=n){
        return;
    }
    //Including the number
    idx[i]=1;
    s1+=h[i];
    WatchingCPL(h,idx,i+1,s1,s2,n,k,cnt+1);
    //not including the number
    idx[i]=0;
    s1-=h[i];
    WatchingCPL(h,idx,i+1,s1,s2,n,k,cnt);
}

int main(){
    int t,n,k,cnt;
    cin>>t;
    while(t--){
        cnt=0;
        cin>>n>>k;
        vector<int> h(n);
        int idx[n]={};
        for(int i=0;i<n;i++){
            cin>>h[i];
        }  
        sort(h.begin(),h.end(),comp);
        WatchingCPL(h,idx,0,0,0,n,k,cnt);
        if(box<40001)
            cout<<box<<endl;
        else
        {
            cout<<"-1"<<endl;
        }
        
    }
}
