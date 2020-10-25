#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,j,n,q,res;
    cin>>t;
    for(int i=0;i<t;i++){
        int g;
        cin>>g;
        while(g--){
            cin>>j>>n>>q;
            if(j==1 && n&1){
                if(q==1)
                    res=n/2;
                else
                    res=n/2+1;
            }
            else if(j==2 && n&1){
                if(q==2)
                    res=n/2;
                else
                    res=n/2+1;
            }
            else
            {
                res=n/2;
            }
            cout<<res<<"\n";
        }
    }
}