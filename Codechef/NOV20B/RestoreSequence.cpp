#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    for(int k=0;k<t;k++){
        cin>>n;
        vector<int> a(n+1),b(n+1);
        for(int i=1;i<=n;i++){
            cin>>b[i];
        }
        int fv=2;
        for(int j=n;j>0;j--)
        {
            if(b[j]>j){
                a[j]=a[b[j]];
            }
            else{
                a[j]=fv;
                fv++;
            }
        }
        for(int i=1;i<=n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}