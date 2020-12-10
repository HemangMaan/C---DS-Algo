#include<bits/stdc++.h>
using namespace std;

int Tiling(int n,int m){
    if(n<m || n==1){
        return 1;
    }
    else if(n==m){
        return 2;
    }
    return Tiling(n-1,m)+Tiling(n-m,m);
}
int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cout<<Tiling(n,m)<<"\n";
    }
}