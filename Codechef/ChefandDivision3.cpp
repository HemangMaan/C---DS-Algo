#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,d;
        int sum=0,res;
        cin>>n>>k>>d;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        res = sum/k;
        if(d>res)
            cout<<res<<endl;
        else
        {
            cout<<d<<endl;
        }
        
    }
}