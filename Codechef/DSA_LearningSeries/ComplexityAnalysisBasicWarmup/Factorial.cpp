#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n;
        cin>>n;
        int res=0;
        while(n>4)
        {
            res+=n/5;
            n=n/5;
        }
        cout<<res<<"\n";
    }
}