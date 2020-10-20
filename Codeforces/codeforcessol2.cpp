#include<bits/stdc++.h>
using namespace std;
#define maxn 105
int main(){
    int t,n,m;
    int a1[maxn],a2[maxn],a3[maxn],a4[maxn];
    cin>>t;
    for(int i=0;i<t;i++){
        bool flag=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            cin>>a1[i]>>a2[i]>>a3[i]>>a4[i];
            if(a2[i]==a3[i])
                flag = 1;
        }
        if(m%2!=0||flag==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}