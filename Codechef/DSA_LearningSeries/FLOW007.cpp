#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int j=0;j<t;++j){
        int n;
        cin>>n;
        int res=0,p = 0;
        while(n>0){
            p=p*10+n%10;
            n=n/10;
        }
        cout<<p<<"\n";
    }
}