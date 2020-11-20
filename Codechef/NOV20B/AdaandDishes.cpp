#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,b1,b2;
    cin>>t;
    
    while(t--){
        cin>>n;
        vector<int> c(n);
        for(int i=0;i<n;++i)
            cin>>c[i];
        sort(c.begin(),c.end());
        b1=b2=0;
        b1=c[c.size()-1];
        b2=c[c.size()-2];
        for(int k=c.size()-3;k>=0;k--){
            if(b2<b1){
                b2+=c[k];
            }
            else
            {
                b1+=c[k];
            }
        }
        if(b1>b2)
            cout<<b1<<endl;
        else
            cout<<b2<<endl;
    }
}